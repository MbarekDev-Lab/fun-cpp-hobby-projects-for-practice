#ifndef Person_HPP
#define Person_HPP

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    // Default constructor
    Person() : name("undefined"), age(0) {};

    // Parameterized constructor
    Person(string name, int age): name(name), age(age) {};

    // Parameterized constructor
    Person(string newName): name(newName), age(0) {};

    // Copy constructor
    Person(const Person &other): name(other.name), age(other.age){};

    void setName(string name);
    void setAge(int age);

    string getName();
    string getName() const;

    int getAge() const;
    void introduce() const;
    string toString() const;

    bool operator==(const Person &other) const;
    bool operator!=(const Person &other) const;
    Person &operator=(const Person &other);

    // Destructor
    ~Person();
};
#endif // Person_HPP
