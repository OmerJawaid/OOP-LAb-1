#pragma once
#include<iostream>
using namespace std;
class Plant
{
public:
    virtual void grow() = 0; // Pure virtual function
    virtual void displayHeight() const = 0;
};

