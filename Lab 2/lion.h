#pragma once
#include "Animal.h"
class lion :
    public Animal
{
    void makeSound() const {
        cout << "Roar" << endl;
    }
};