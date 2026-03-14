//
// Created by M'Barek Benraiss on 13.03.26.
//
#include <iostream>
#include "Cat.h"
using namespace std;

Cat::Cat()
{
    cout << "Cat Created " << endl;
    isHappy = true;
}
Cat::~Cat()
{
    cout << "Cat Destroyed " << endl;
}

void Cat::speak()
{
    if (isHappy)
    {
        cout << "Happy " << endl;
    }
    else
    {
        cout << "Sad !" << endl;
    }
}
