#include <iostream>

class Circle {
private:
    double radius;
    double centerX;
    double centerY;

public:
    // Constructor with parameters
    Circle(double r, double x, double y) : radius(r), centerX(x), centerY(y) {}

    // Method to display circle information
    void displayCircle() {
        std::cout << "Radius: " << radius << std::endl;
        std::cout << "Center coordinates: (" << centerX << ", " << centerY << ")" << std::endl;
    }
};

int main() {
    // Creating a circle object
    Circle circle1(5.0, 2.0, 3.0);

    // Displaying circle information
    std::cout << "Circle Information:" << std::endl;
    circle1.displayCircle();

    return 0;
}
