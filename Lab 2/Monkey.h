#pragma once
#include "Animal.h"
class Monkey :
    public Animal
{
    void makeSound() const{
        cout << "oo aaa" << endl;
    }
};

