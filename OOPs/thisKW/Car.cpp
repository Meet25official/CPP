#include <iostream>
using namespace std;

class Car {
    public:
    string licensePlate;
    double fuelLevel;
    Car(const string& licensePlate, double initialFuelLevel) : licensePlate(licensePlate), fuelLevel(initialFuelLevel) {}

    void refuel(double liters) {
       
        this->fuelLevel += liters;
        cout << "Refueled " << liters << " liters. Current fuel level: " << fuelLevel << " liters." << endl;
    }
};

int main() {
   
    Car myCar("BMW", 30.0); 
    myCar.refuel(10.0); 
    return 0;
}
