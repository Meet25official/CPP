// Car Rental Management System:
//    Build a car rental management system for a rental agency. Each agency has multiple branches, and each branch manages multiple cars. Develop classes for Agency, Branch, and Car. The Agency class should aggregate Branch objects, and each Branch object should aggregate Car objects. Provide functionalities to add new cars, rent a car from a specific branch, and calculate total revenue earned by an agency.


#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    string licensePlate;
    double pricePerDay;
    bool rented;
public:
    Car(string model, string licensePlate, double pricePerDay) 
        : model(model), licensePlate(licensePlate), pricePerDay(pricePerDay), rented(false) {}

    string& getModel() {
        return model;
    }

    string& getLicensePlate() {
        return licensePlate;
    }

    double getPricePerDay() {
        return pricePerDay;
    }

    bool isRented() {
        return rented;
    }

    void rentCar() {
        rented = true;
    }

    void returnCar() {
        rented = false;
    }
};

class Branch {
private:
    string location;
    Car* cars[100];
    int numCars;
public:
    Branch(string location) : location(location), numCars(0) {}

    void addCar(const Car& car) {
        if (numCars < 100) {
            cars[numCars++] = new Car(car);
        }
    }

    void displayCars() {
        cout << "Cars available at Branch " << location << ":" << endl;
        for (int i = 0; i < numCars; ++i) {
            cout << "Model: " << cars[i]->getModel() << ", License Plate: " << cars[i]->getLicensePlate() 
                      << ", Price per Day: $" << cars[i]->getPricePerDay() << endl;
        }
    }

    double calculateRevenue() {
        double totalRevenue = 0.0;
        for (int i = 0; i < numCars; ++i) {
            if (cars[i]->isRented()) {
                totalRevenue += cars[i]->getPricePerDay();
            }
        }
        return totalRevenue;
    }

    Car* findCarByLicensePlate(const string& licensePlate) {
        for (int i = 0; i < numCars; ++i) {
            if (cars[i]->getLicensePlate() == licensePlate) {
                return cars[i];
            }
        }
        return nullptr;
    }

    Car* rentCar(const string& licensePlate) {
        Car* car = findCarByLicensePlate(licensePlate);
        if (car != nullptr && !car->isRented()) {
            car->rentCar();
            return car;
        }
        return nullptr;
    }

    void returnCar(const string& licensePlate) {
        Car* car = findCarByLicensePlate(licensePlate);
        if (car != nullptr && car->isRented()) {
            car->returnCar();
        }
    }
};

class Agency {
private:
    string name;
    Branch* branches[10];
    int numBranches;
public:
    Agency(string name) : name(name), numBranches(0) {}

    void addBranch(const Branch& branch) {
        if (numBranches < 10) {
            branches[numBranches++] = new Branch(branch);
        }
    }

    double calculateTotalRevenue() {
        double totalRevenue = 0.0;
        for (int i = 0; i < numBranches; ++i) {
            totalRevenue += branches[i]->calculateRevenue();
        }
        return totalRevenue;
    }
};

int main() {
    Car car1("Toyota Camry", "ABC123", 50.0);
    Car car2("Honda Civic", "XYZ456", 40.0);
    Car car3("Ford Mustang", "DEF789", 70.0);

    Branch branch1("Main Branch");
    branch1.addCar(car1);
    branch1.addCar(car2);

    Branch branch2("Downtown Branch");
    branch2.addCar(car3);

    Agency rentalAgency("My Rental Agency");
    rentalAgency.addBranch(branch1);
    rentalAgency.addBranch(branch2);

    branch1.rentCar("ABC123");

    cout << "Total revenue earned by the agency: $" << rentalAgency.calculateTotalRevenue() << endl;

    return 0;
}
