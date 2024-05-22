// 2. Implement a class called "Rectangle" with attributes length and width. Write methods to input dimensions, calculate area, and display the rectangle's details.

#include<iostream>
using namespace std;

class Rectangle{
    double length;
    double width;
    double Area;

public:
    void inputDimensions(){
        cout << "Enter the Length: ";
        cin >> length;

        cout << "Enter the Width: ";
        cin >> width;
    }

    void calculateArea(){
        Area = length * width;
    }

    void displayDimensions(){
        cout << "Enter the Lenght: " << length << endl;
        cout << "Enter the Width: " << width << endl;
        cout << "Enter the Area: " << Area << endl;
    }
};
int main(){

    Rectangle  rect;
    rect.inputDimensions();
    rect.calculateArea();
    rect.displayDimensions();

    return 0;
}