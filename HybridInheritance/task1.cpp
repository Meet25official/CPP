// 1. Vehicle Classification:
//    Create a system to classify vehicles into different categories based on their type (e.g., car, motorcycle) and their engine type (e.g., electric, gas). Use hybrid inheritance to model this system effectively.

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string type;
public:
    Vehicle(string _type) : type(_type) {}
    virtual void display() = 0;
};

// Base class for engine types
class Engine {
protected:
    string engineType;
public:
    Engine(string _engineType) : engineType(_engineType) {}
    virtual void displayEngine() = 0; 
};

class Car : public Vehicle {
public:
    Car(string _type) : Vehicle(_type) {}
    void display() override {
        cout << "Vehicle Type: " << type << endl;
    }
};
class ElectricCar : public Car, public Engine {
public:
    ElectricCar(string _type, string _engineType) : Car(_type), Engine(_engineType) {}
    void displayEngine() override {
        cout << "Engine Type: " << engineType << endl;
    }
};

int main() {
    ElectricCar eCar("Car", "Electric");
    eCar.display();
    eCar.displayEngine();
    
    return 0;
}
