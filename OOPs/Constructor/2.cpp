#include <iostream>
#include <vector>

class GeometricShape {
private:
    std::vector<double> dimensions;

public:
    // Parameterized constructor
    GeometricShape(const std::vector<double>& dims) : dimensions(dims) {}

    // Method to display shape dimensions
    void displayDimensions() {
        std::cout << "Dimensions: ";
        for (size_t i = 0; i < dimensions.size(); ++i) {
            std::cout << dimensions[i];
            if (i != dimensions.size() - 1)
                std::cout << ", ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Creating a geometric shape object with dimensions (3, 4, 5)
    std::vector<double> dims1 = {3, 4, 5};
    GeometricShape shape1(dims1);
    std::cout << "Shape 1:" << std::endl;
    shape1.displayDimensions(); // Output: Dimensions: 3, 4, 5

    // Creating a geometric shape object with dimensions (2.5, 4.7)
    std::vector<double> dims2 = {2.5, 4.7};
    GeometricShape shape2(dims2);
    std::cout << "Shape 2:" << std::endl;
    shape2.displayDimensions(); // Output: Dimensions: 2.5, 4.7

    return 0;
}
