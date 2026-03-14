
#include <iostream>
#include <sstream>
#include "Person.hpp"
using namespace std;

bool Person::operator==(const Person &other) const
{
    return name == other.name && age == other.age;
}

bool Person::operator!=(const Person &other) const
{
    return !(*this == other);
}

Person &Person::operator=(const Person &other)
{
    if (this != &other)
    {
        name = other.name;
        age = other.age;
    }
    return *this;
}

void Person::setName(const string name)
{
    this->name = name;
}

string Person::getName()
{
    return name;
}

void Person::setAge(int age)
{
    this->age = age;
}

int Person::getAge() const
{
    return age;
}

void Person::introduce() const
{
    cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
}

string Person::toString() const
{
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << ", Age: ";
    ss << age;
    return ss.str();
}

Person::~Person()
{
    cout << "Destructor called for " << this << endl;
}