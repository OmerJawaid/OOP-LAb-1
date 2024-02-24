#pragma once
#include "Animal.h"
class Elephant :
    public Animal
{
    void makeSound() const{
        cout << "Trumpet" << endl;
    }
};

