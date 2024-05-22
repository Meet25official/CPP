// 2. Implement a class for a geometric shape with member variables representing its dimensions. Write a parameterized constructor that initializes these dimensions when an object is created.


#include<iostream>
using namespace std;

class GeometricShape{
    private:
    double length;
    double width;

    public:
    GeometricShape(double l, double w){
        length = l;
        width = w;
    }
    void displayDimensions(){
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        }
};

int main(){

    GeometricShape rectangle(5.0, 3.0);
    rectangle.displayDimensions();
    return 0;
}