// 6. Design a class to represent a point in a 2D coordinate system. Write a constructor that initializes the x and y coordinates to specific values.

#include<iostream>
using namespace std;

class Point2D{
    private:
    int x;
    int y;

    public:
    Point2D(int xCoord = 0, int yCoord = 0){    
        x = xCoord;
        y = yCoord;
    }
    void displayPoint(){
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};
int main(){
    Point2D p1(10, 20);
    Point2D p2; 
    p1.displayPoint();
    p2.displayPoint();
    return 0;
}