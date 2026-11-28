// Part B: Multilevel Inheritance
// Q3. Vehicle Information
// Write a C++ program to create a base class Vehicle containing vehicle number and
// brand. Derive a class Car containing model name and fuel type. Further derive a class
// ElectricCar containing battery capacity and charging time. Accept and display all vehicle
// details.


#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    string vehicleNumber;
    string brand;

    void getVehicle()
    {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNumber;

        cout << "Enter Brand: ";
        cin >> brand;
    }
};

// Derived class 1
class Car : public Vehicle
{
public:
    string modelName;
    string fuelType;

    void getCar()
    {
        cout << "Enter Model Name: ";
        cin >> modelName;

        cout << "Enter Fuel Type: ";
        cin >> fuelType;
    }
};

// Derived class 2
class ElectricCar : public Car
{
public:
    float batteryCapacity;
    float chargingTime;

    void getElectricCar()
    {
        cout << "Enter Battery Capacity (kWh): ";
        cin >> batteryCapacity;

        cout << "Enter Charging Time (hours): ";
        cin >> chargingTime;
    }

    void display()
    {
        cout << "\n----- VEHICLE DETAILS -----" << endl;

        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model Name: " << modelName << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
        cout << "Charging Time: " << chargingTime << " hours" << endl;
    }
};

int main()
{
    ElectricCar e;

    e.getVehicle();
    e.getCar();
    e.getElectricCar();

    e.display();

    return 0;
}
