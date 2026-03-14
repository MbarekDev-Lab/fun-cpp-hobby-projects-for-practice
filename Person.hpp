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
    Person(string name, int age);
    Person(const Person& other);
    Person();

    void setName(string name);
    void setAge(int age);

    string getName();
    string getName() const;

    int getAge() const;
    void introduce() const;
    string toString() const;
    
    bool operator==(const Person& other) const;
    bool operator!=(const Person& other) const;
    Person& operator=(const Person& other);
    
    // Destructor
    ~Person();

};
#endif // Person_HPP
