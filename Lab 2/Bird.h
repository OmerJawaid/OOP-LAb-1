#pragma once
#include "Animal.h"
class Bird :
    public Animal
{
    void makeSound()const {
        cout << "Chu CHu" << endl;
    }
};

