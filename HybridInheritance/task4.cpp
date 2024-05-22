// 4. Shape Hierarchy:
//    Create a system to represent geometric shapes. Shapes can be categorized based on their type (e.g., circle, rectangle) and their properties (e.g., 2D, 3D). Use hybrid inheritance to model this hierarchy effectively.

#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string type;
public:
    Shape(string _type) : type(_type) {}
    virtual void display() = 0;
};

class Property {
protected:
    string propertyType;
public:
    Property(string _propertyType) : propertyType(_propertyType) {}
    virtual void displayProperty() = 0;
};

class TwoDimensionalShape : public Shape {
public:
    TwoDimensionalShape(string _type) : Shape(_type) {}
    void display() override {
        cout << "Shape Type: " << type << endl;
    }
};

class Circle : public TwoDimensionalShape, public Property {
public:
    Circle(string _type, string _propertyType) : TwoDimensionalShape(_type), Property(_propertyType) {}
    void displayProperty() override {
        cout << "Property: " << propertyType << endl;
    }
};

int main() {
    Circle circle("Circle", "2D");
    circle.display();
    circle.displayProperty();
    
    return 0;
}

