#include <iostream>
#include <string>
#include <sstream>
#include "Person.hpp"
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    // Create a Person object with user input
    Person user(name, age);
    cout << user.toString() << endl;

    // Demonstrate default constructor
    Person defaultPerson;
    cout << "Default person: " << defaultPerson.toString() << endl;

    // Demonstrate copy constructor
    Person copyPerson = user;
    cout << "Copy of user: " << copyPerson.toString() << endl;

    // Show memory locations (for demonstration)
    cout << "User object memory location: " << &user << endl;
    cout << "Copy object memory location: " << &copyPerson << endl;

    return 0;
}

/*
benraiss@MacBookAir learnCpp % g++ main.cpp Person.cpp -o main && ./main
Enter your name: Benraiss M barek           
Enter your age: 32
Name: Benraiss M barek, Age: 32
Default person: Name: undefined, Age: 0
Copy of user: Name: Benraiss M barek, Age: 32
User object memory location: 0x16f96eb48
Copy object memory location: 0x16f96eac0
Destructor called for 0x16f96eac0
Destructor called for 0x16f96eaf8
Destructor called for 0x16f96eb48
benraiss@MacBookAir learnCpp % 

*/
