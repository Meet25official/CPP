// 8. Develop a class to model a circle with member variables for radius and center coordinates. Write a constructor that initializes these variables when an object is created.

#include<iostream>
using namespace std;

class Circle{
    private:
    double radius;
    double x, y;

    public:
    Circle(double r, double xCoord, double yCoord){
        radius = r;
        x = xCoord;
        y = yCoord;
    }

    void displayCircle(){
        cout << "Circle with radius " << radius << " centered at (" << x << ", " << y << ")" << endl;        
    }
};
int main(){
    Circle c1(5.0, 1.0, 2.0);   
    Circle c2(10.0, 3.0, 4.0);

    c1.displayCircle();
    c2.displayCircle();
    return 0;
}