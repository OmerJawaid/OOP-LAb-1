#pragma once
#include "Plant.h"
class Bush :
    public Plant
{
private:
    double height; // in centimeters
    double growthRate; // cm per day
public:
    Bush(double initialHeight) : height(initialHeight), growthRate(0.7) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() const override {
        cout << "Bush height: " << height << " cm" << endl;
    }


};

