#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    // Default constructor
    Car() : make("Unknown"), model("Unknown"), year(0) {}

    // Parameterized constructor
    Car(std::string make, std::string model, int year) : make(make), model(model), year(year) {}

    // Method to display car information
    void display() {
        std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
    }
};

int main() {
    // Creating a car object using the default constructor
    Car car1;
    std::cout << "Car 1:" << std::endl;
    car1.display(); // Output: Make: Unknown, Model: Unknown, Year: 0

    // Creating a car object using the parameterized constructor
    Car car2("Toyota", "Camry", 2022);
    std::cout << "Car 2:" << std::endl;
    car2.display(); // Output: Make: Toyota, Model: Camry, Year: 2022

    return 0;
}
