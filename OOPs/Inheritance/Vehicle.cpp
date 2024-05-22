#include <iostream>
using namespace std;

class Vehicle {
protected:
    int wheels;
public:
    Vehicle(int wheels) : wheels(wheels) {}
    void display() {
        cout << "Number of wheels: " << wheels << endl;
    }
};

class Car : public Vehicle {
public:
    Car() : Vehicle(4) {}
};

class Motorcycle : public Vehicle {
public:
    Motorcycle() : Vehicle(2) {}
};

class Truck : public Vehicle {
public:
    Truck() : Vehicle(6) {}
};

int main() {
    Car car;
    Motorcycle motorcycle;
    Truck truck;

    car.display();
    motorcycle.display();
    truck.display();

    return 0;
}
