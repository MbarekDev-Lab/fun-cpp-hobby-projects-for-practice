#include <iostream>
#include <string>
#include <sstream>
#include "Person.hpp"
using namespace std;

int main()
{
    cout << "Enter your name: " << flush;
    string inputName;
    cin >> inputName;
    cout << "You Entered: " << inputName << endl;

    cout << "Enter your age: " << flush;
    int inputAge;
    cin >> inputAge;
    cout << "You Entered: " << inputAge << endl;

    Person user(inputName, inputAge);
    cout << "Name: " << user.getName() << ", Age: " << user.getAge() << endl;

    Person defaultPerson;
    cout << "Default person: " << defaultPerson.toString() << endl;

    Person copyOfUser(user);
    cout << "Copy of user: " << copyOfUser.toString() << endl;  

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
