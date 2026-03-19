#include <iostream>
#include <string>
#include <algorithm>
#include <limits>

#if defined(_WIN32) || defined(_WIN64)
#include <conio.h> //Platform detection: Uses <conio.h> for Windows to read password without echoing. For Unix-like systems, uses termios to disable echo.
#else
#include <termios.h> // Platform detection: Uses <termios.h> for Unix/macOS to handle password masking
#include <unistd.h>
#endif

// Constant time comparison to reduce timing attack surface
bool constant_time_equal(const std::string &a, const std::string &b)
{
    if (a.size() != b.size())
        return false;
    unsigned char diff = 0;
    for (size_t i = 0; i < a.size(); ++i)
        diff |= static_cast<unsigned char>(a[i] ^ b[i]);
    return diff == 0;
}

// Read password with optional masking. Falls back to visible input if masking not available.
std::string read_password(const std::string &prompt = "Password: ")
{
    std::cout << prompt << std::flush;
#if defined(_WIN32) || defined(_WIN64)
    std::string pwd;
    int ch;
    while ((ch = _getch()) != '\r')
    { // Enter key
        if (ch == '\b')
        { // backspace
            if (!pwd.empty())
            {
                pwd.pop_back();
                std::cout << "\b \b" << std::flush;
            }
        }
        else if (ch == 3)
        { // Ctrl-C
            std::cout << std::endl;
            std::exit(1);
        }
        else
        {
            pwd.push_back(static_cast<char>(ch));
            std::cout << '*' << std::flush;
        }
    }
    std::cout << std::endl;
    return pwd;
#else
    struct termios oldt, newt;
    if (tcgetattr(STDIN_FILENO, &oldt) != 0)
    {
        // fallback
        std::string fallback;
        std::getline(std::cin, fallback);
        return fallback;
    }
    newt = oldt;
    newt.c_lflag &= ~ECHO;
    if (tcsetattr(STDIN_FILENO, TCSANOW, &newt) != 0)
    {
        std::string fallback;
        std::getline(std::cin, fallback);
        return fallback;
    }
    std::string pwd;
    std::getline(std::cin, pwd);
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    std::cout << std::endl;
    return pwd;
#endif
}

int main()
{
    const std::string name = "M'Barek Beni";
    const std::string password = "123"; // For demo only.
    const int maxAttempts = 3;

    bool authenticated = false;
    for (int attempt = 1; attempt <= maxAttempts; ++attempt)
    {
        std::string input = read_password("Please enter your password: ");
        if (constant_time_equal(input, password))
        {
            authenticated = true;
            break;
        }

        int remaining = maxAttempts - attempt;
        if (remaining > 0)
        {
            std::cout << "Access denied. Incorrect password. "
                      << remaining << " attempt" << (remaining > 1 ? "s" : "")
                      << " remaining." << std::endl;
        }
        else
        {
            std::cout << "Maximum attempts reached. Access denied." << std::endl;
        }
    }

    if (authenticated)
    {
        std::cout << "Access granted. Welcome, " << name << "!" << std::endl;
    }

    return authenticated ? 0 : 1;
}

/*

    This code is a secure, cross platform C++ login program that:

    Hides password input (shows * or nothing) for privacy.
    Uses a constant time string comparison to prevent timing attacks.
    Limits login attempts and gives clear feedback.
    Key parts explained:

    Platform detection: Uses <conio.h> for Windows and <termios.h> for Unix/macOS to handle password masking.
    constant_time_equal: Compares two strings in a way that takes the same time regardless of where they differ, reducing the risk of timing attacks.
    read_password: Prompts the user for a password. On Windows, it masks input with *; on Unix/macOS, it disables terminal echo so nothing is shown.
    main: Prompts for the password up to 3 times. If the user enters the correct password, access is granted; otherwise, access is denied after 3 failed attempts.

*/