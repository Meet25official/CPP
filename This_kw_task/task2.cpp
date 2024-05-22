// 2. "Design a class 'Car' to model different cars owned by individuals. Each car has a unique license plate number and a fuel level. Implement a member function 'refuel(double liters)' that takes the amount of fuel to be added and uses the 'this' pointer to update the fuel level of the current car."

#include<iostream>
using namespace std;

class Car{
    private:
    string licensePlateNumber;
    double fuelLevel;
    public:
    Car(string licensePlateNumber){
        this->licensePlateNumber = licensePlateNumber;
        this->fuelLevel = 0.0;
        }
        void refuel(double liters){
            this->fuelLevel += liters;
            cout << "Fuel level updated to " << this->fuelLevel << " liters." << endl;
        }
        void displayInfo(){
            cout << "License Plate Number: " << this->licensePlateNumber << endl;
            cout << "Fuel Level: " << this->fuelLevel << " liters." << endl;
        }
};
int main(){
    Car car1("ABC123");
    car1.displayInfo();
    car1.refuel(20.0);
    car1.displayInfo();
    return 0;
}