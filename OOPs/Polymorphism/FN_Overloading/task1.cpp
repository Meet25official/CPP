#include<iostream>
using namespace std;

class Geometry{
private:
    int a,b;
public:
    Geometry(int a1,int b1){
        a = a1;
        b = b1;
    }
    int area(int a) {
        cout << "The area of Cicle:- ";
        return (3.14*a*a);
    }
    
    int area(int a, int b) {
        cout << "The area of Triangle:- ";
        return 0.5*b*a;
    }
    
    float area(float a, float b) {
        cout << "The area of Rectangle:- ";
        return a*b;
    }
    
};

int main() {
    Geometry obj(4,3);
    cout << obj.area(2) << endl;
    cout << obj.area(2, 3) << endl;
    cout << obj.area(2.2f, 3.8f) << endl;
    return 0;
}