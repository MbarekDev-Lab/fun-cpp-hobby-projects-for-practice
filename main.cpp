#include <iostream>
#include <string>

/*

This lecture (22. Arrays – Lists of Data) is teaching one of the core building blocks in C++: 
arrays. Let me break down exactly what’s happening in that code you’re seeing in the video and the key concepts you should 
understand.

1. What is an Array?
An array is just a way to store multiple values of the same type in one variable.

Instead of doing:
    int a = 88;
    int b = 123;
    int c = 7;
You do:
    int values[3];
Now values can hold 3 integers.

2. Assigning Values
    int values[3];
    values[0] = 88;
    values[1] = 123;
    values[2] = 7;
    // Important idea:
    // Arrays use indexing starting at 0
    // So:
    // values[0] → first element
    // values[1] → second
    // values[2] → third

3. This Line is VERY Important (Bug Example)
    std::cout << values[3] << std::endl; //  Wrong! Out of bounds
Why? The array has size 3 → valid indexes are: 0, 1, 2
values[3] is out of bounds
 Result: You may get garbage value or undefined behavior (can even crash)
C++ does NOT protect you from array overflow

4. Printing Values
    std::cout << values[0] << std::endl;
    std::cout << values[1] << std::endl;
    std::cout << values[2] << std::endl;

5. Arrays with Other Types (double)
    double numbers[4] = {4.5, 2.3, 7.2, 8.1};
 You can initialize arrays immediately; works with any type (int, double, etc.)

6. Using a Loop (VERY IMPORTANT)
    for(int i = 0; i < 4; i++) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }
 This is the real power of arrays: process lots of data automatically, no repetition

7. Arrays Initialized with Zero
    int numberArray[8] = {};
 All values are automatically set to 0

 Big Picture (What You Should Understand)
Arrays = grouped data; store many values in one variable
Indexing starts at 0 (fundamental in C++)
Loops + arrays = powerful combo
 Out-of-bounds access is dangerous (C++ won’t stop you)

 Simple Mental Model
Think of an array like:
Index:   0    1    2
        [88] [123] [7]
You must stay inside the boxes.
*/

// --- C++ Array Example from the lecture ---
void arrayLectureDemo()
{
    int values[3];
    values[0] = 88;
    values[1] = 123;
    values[2] = 7;

    std::cout << "\nArray values (manual print):\n";
    std::cout << values[0] << std::endl;
    std::cout << values[1] << std::endl;
    std::cout << values[2] << std::endl;

    // Out-of-bounds access (for demonstration only, do not use in real code)
    // std::cout << values[3] << std::endl; // Undefined behavior

    double numbers[4] = {4.5, 2.3, 7.2, 8.1};
    std::cout << "\nDouble array with loop:\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    int numberArray[8] = {};
    std::cout << "\nZero-initialized int array:\n";
    for (int i = 0; i < 8; i++)
    {
        std::cout << numberArray[i] << " ";
    }
    std::cout << std::endl;
}
#include <iostream>
#include <string>

int main()
{
    const std::string pass = "mbarek";
    std::string input;
    std::cout << "\n--- Example: while loop with break ---" << std::endl;
    do
    {
        std::cout << "Enter password: ";
        std::cin >> input;
        if (input == pass)
        {
            std::cout << "Password correct!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Incorrect password. Try again." << std::endl;
        }
    } while (true); // Infinite loop until correct password is entered
    std::cout << "Password accepted!" << std::endl;

    // Run the array lecture demo
    arrayLectureDemo();

    std::cout << "\nDone!" << std::endl;
    return 0;
}