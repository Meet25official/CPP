#include <iostream>
#include <string>

class Computer {
private:
    std::string brand;
    std::string model;
    double price;

public:
    // Constructor with parameters
    Computer(const std::string& compBrand, const std::string& compModel, double compPrice)
        : brand(compBrand), model(compModel), price(compPrice) {}

    // Method to display computer information
    void displayComputer() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Price: $" << price << std::endl;
    }
};

int main() {
    // Creating a computer object
    Computer computer1("Apple", "MacBook Pro", 2000.0);

    // Displaying computer information
    std::cout << "Computer Information:" << std::endl;
    computer1.displayComputer();

    return 0;
}
