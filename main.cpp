#include <iostream>
#include <sstream>
#include "Person.hpp"
using namespace std;

int main()
{

    /*{
        Cat *cat = new Cat();
        cat->speak();
        delete cat;
    }*/

    string name = "John";
    int age = 30;
    stringstream ss;

    ss << "Name is : " << name;
    ss << ", Age is : " << age;
    string info = ss.str();

    cout << info << endl;

    // string info = "Name: " + name + ", Age: " + age;
    // cout << info << endl;

    Person person;

    person.setName("Alice");
    person.setAge(25);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    // person.introduce();

    return 0;
};

/*
sstream is a class in C++ that provides functionality for string manipulation and formatting. It allows you to create a stream that can be used to read from or write to strings, similar to how you would use streams for input and output with files or the console.
Name is : John, Age is : 30
Name: Alice
Age: 25
*/
