#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include "Person.hpp"
using namespace std;

int main()
{

    int value = 12345; // Default for signed int is typically 4 bytes, with a range of -2,147,483,648 to 2,147,483,647

    cout << "Value: " << value << endl;

    cout << "INT_MAX: " << INT_MAX << endl;   // INT_MAX is typically 2,147,483,647 for a 4-byte signed int
    cout << "INT_MIN: " << INT_MIN << endl;   // INT_MIN is typically -2,147,483,648 for a 4-byte signed int
    cout << "UINT_MAX: " << UINT_MAX << endl; // UINT_MAX is typically 4,294,967,295 for a 4-byte unsigned int

    long int longValue = 1234567890123456789;    // Default for long int is typically 8 bytes on modern systems, with a range of -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 for signed long int
    cout << "Long Value: " << longValue << endl; // This will print 1234567890123456789 as expected, since it's within the valid range for signed long int

    short int shortValue = 32767;
    cout << "Short Value: " << shortValue << endl; // This will print 32767 as expected, since it's within the valid range for signed short int

    cout << "Size of char: " << sizeof(char) << " bytes" << endl; // Size of char is typically 1 byte

    cout << "SIze of int: " << sizeof(int) << " bytes" << endl;             // Size of int is typically 4 bytes on modern systems, but it can vary based on the platform and compiler
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;   // Size of long int is typically 8 bytes on modern systems, but it can vary based on the platform and compiler
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl; // Size of short int is typically 2 bytes on modern systems, but it can vary based on the platform and compiler

    // unsigned int unsignedValue = -1; // This will wrap around to UINT_MAX

    signed int signedValue = -12345;                 // Default for signed int is typically 4 bytes, with a range of -2,147,483,648 to 2,147,483,647
    cout << "Signed Value: " << signedValue << endl; // This will print -12345 as expected, since it's within the valid range for signed int

    unsigned int unsignedValue = -12345;                 // Default for unsigned int is typically 4 bytes, with a range of 0 to 4,294,967,295
    cout << "Unsigned Value: " << unsignedValue << endl; // This will print 4294954951, which is the result of wrapping around from -12345 to the maximum value of unsigned int (UINT_MAX) plus 1, minus 12345

    unsigned int anotherUnsignedValue = 12345;                 // Default for unsigned int is typically 4 bytes, with a range of 0 to 4,294,967,295
    cout << "Another Unsigned Value: " << anotherUnsignedValue << endl; // This will print 12345 as expected, since it's within the valid range for unsigned int


    return 0;
}

/*
benraiss@MacBookAir learnCpp % g++ main.cpp Person.cpp -o main && ./main
Value: 12345
INT_MAX: 2147483647
INT_MIN: -2147483648
UINT_MAX: 4294967295
Long Value: 1234567890123456789
Short Value: 32767
Size of char: 1 bytes
SIze of int: 4 bytes
Size of long int: 8 bytes
Size of short int: 2 bytes
Signed Value: -12345
Unsigned Value: 4294954951
Another Unsigned Value: 12345
benraiss@MacBookAir learnCpp % 

*/
