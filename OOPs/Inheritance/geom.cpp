#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    double area();
    double perimeter();
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double radius) : radius(radius) {}
    double area(){
        return 3.14 * radius * radius;
    }
    double perimeter(){
        return 2 * 3.14 * radius;
    }
};

class Square : public Shape {
protected:
    double side;
public:
    Square(double side) : side(side) {}
    double area(){
        return side*side;
    }
    double perimeter(){
        return 4*side;
    }
};

class Triangle : public Shape {
protected:
    double side1, side2, side3;
public:
    Triangle(double side1, double side2, double side3) : side1(side1), side2(side2), side3(side3) {}
    double area(){
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double perimeter(){
        return side1 + side2 + side3;
    }
};

int main() {
    Circle circle(5);
    Square square(4);
    Triangle triangle(3, 4, 5);

    cout << "Circle - Area: " << circle.area() << ", Perimeter: " << circle.perimeter() << endl;
    cout << "Square - Area: " << square.area() << ", Perimeter: " << square.perimeter() << endl;
    cout << "Triangle - Area: " << triangle.area() << ", Perimeter: " << triangle.perimeter() << endl;

    return 0;
}
