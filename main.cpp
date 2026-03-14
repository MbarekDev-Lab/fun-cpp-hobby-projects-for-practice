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

    Person person3("Mbarek", 30); // Parameterized constructor
                                  //  Person person3 = person2; // Copy constructor

    cout << person2.toString() << " ; memorylocation of persomn 2: " << &person2 << endl;
    cout << person3.toString() << " ; memorylocation of persomn 3: " << &person3 << endl;

    // person.introduce();
    return 0;
};

/*

benraiss@Mbareks-MacBook-Air learnCpp % g++ main.cpp Person.cpp -o main && ./main
Default constructor called for 0x16fc06a18
Name: undefined, Age: 0
Parameterized constructor called for Memory location  of Object: 0x16fc069e0
Parameterized constructor called for Memory location  of Object: 0x16fc069a8
Name: Bob, Age: 30 ; memorylocation of persomn 2: 0x16fc069e0
Name: Mbarek, Age: 30 ; memorylocation of persomn 3: 0x16fc069a8
Destructor called for 0x16fc069a8
Destructor called for 0x16fc069e0
Destructor called for 0x16fc06a18
benraiss@Mbareks-MacBook-Air learnCpp % 

*/
