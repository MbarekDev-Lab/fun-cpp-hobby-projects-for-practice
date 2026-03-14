
#include <iostream>
#include <sstream>
#include "Person.hpp"
using namespace std;

Person::Person(){
name = "undefined";
age = 0;
    cout << "Default constructor called for " << this << endl;
}


Person::Person(string name, int age){
    this->name = name;
    this->age = age;
    cout << "Parameterized constructor called for Memory location  of Object: " << this << endl;
}

Person::Person(const Person& other){
    name = other.name;
    age = other.age;
    cout << "Copy constructor called for Memory location  of Object: " << this << endl;
}

void Person::setName(const string name){
    this->name = name;
}


string Person::getName(){
    return name;
}

void Person::setAge(int age){
    this->age = age;    
    
}

int Person::getAge() const{
    return age;
}

void Person::introduce()const{
    cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
}

string Person::toString() const{
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << ", Age: ";
    ss << age;
    return ss.str();
}


Person::~Person(){
    cout << "Destructor called for " << this << endl;   
}