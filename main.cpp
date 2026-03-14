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

    // cout << info << endl;

    // string info = "Name: " + name + ", Age: " + age;
    // cout << info << endl;

    // Person person;

    // person.setName("Alice");
    // person.setAge(25);

    // cout << "Name: " << person.getName() << endl;
    // cout << "Age: " << person.getAge() << endl;

    Person person1;
    cout << person1.toString() << endl;

    Person person2("Bob", 30); // Parameterized constructor
    cout << person2.toString() << endl;

    Person person3("Mbarek", 30); // Parameterized constructor
                                  //  Person person3 = person2; // Copy constructor
    // cout << person3.toString() << endl;

    cout << person3.toString() << endl;

    // person.introduce();

    return 0;
};

/*

sstream is a class in C++ that provides functionality for string manipulation and formatting. It allows you to create a stream that can be used to read from or write to strings, similar to how you would use streams for input and output with files or the console.

benraiss@Mbareks-MacBook-Air learnCpp % g++ main.cpp Person.cpp -o main && ./main
Name: undefined, Age: 0
Name: Bob, Age: 30
Name: Mbarek, Age: 30
benraiss@Mbareks-MacBook-Air learnCpp %

*/
