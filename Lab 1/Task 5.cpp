#include <iostream>
using namespace std;

class Vehicle
{
private:
    string make;
    string model;
    int year;

public:
    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}

    void setMake(string mk)
    {
        make = mk;
    }

    void setModel(int mdl)
    {
        cout << "What is the model of your car: ";
        cin >> mdl;
        model = mdl;
    }
    void setYear(int yr)
    {
        cout << "What is the year car was made: ";
        cin >> yr;
        year = yr;
    }
    void displayVehicleInfo()
    {
        cout << "Make: " << make << " ,Model: " << model << ", Year: " << year << endl;
    }
};