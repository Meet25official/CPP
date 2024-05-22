#include <iostream>

class Point2D {
private:
    double x;
    double y;

public:
    // Constructor with parameters
    Point2D(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Method to display point coordinates
    void displayPoint() {
        std::cout << "Point coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    // Creating a point object
    Point2D point1(3.5, 2.0);

    // Displaying point coordinates
    point1.displayPoint();

    return 0;
}
