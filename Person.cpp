#include "Person.hpp"

Person::Person(){
name = "M barek";
age = 30;
}


Person::Person(string name, int age){
    this->name = name;
    this->age = age;
}

Person::Person(const Person& other){
    name = other.name;
    age = other.age;
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


Person::~Person(){

}