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

    void setModel(string mdl)
    {
        model = mdl;
    }
    void setYear(int yr)
    {
        year = yr;
    }
    void displayVehicleInfo()
    {
        cout << "Make: " << make << "\nModel: " << model << "\nYear: " << year << endl;
    }
};
class Car
{
private:
    int miles;

public:
    Car(int mil) : miles(mil) {}
    void service(int mil)
    {
        if (mil >= 10000)
        {
            cout << "Car needs servicing. ALON" << endl;
        }
        else if (mil < 10000 && mil > 0)
            cout << "No service Required" << endl;
        else
            cout << "Enter the correct number of miles!" << endl;
    }
};
int main()
{
    string make, model;
    int year, miles;
    Vehicle myVehicle("Toyota", "Corolla", 2020);
    myVehicle.displayVehicleInfo();
    cout << "What is the car brand: ";
    cin >> make;
    cout << "What is model of Car: ";
    cin >> model;
    cout << "What is the year: ";
    cin >> year;
    cout << "What are the miles driven: ";
    cin >> miles;
    myVehicle.setMake(make);
    myVehicle.setModel(model);
    myVehicle.setYear(year);
    myVehicle.displayVehicleInfo();
    Car Car1(1000);
    Car1.service(miles);
}