// 1. Create a class representing a car. Implement a destructor that prints a message indicating the destruction of a car object.

#include<iostream>
using namespace std;

class Car{
    public:
    Car(){
        cout << "A car object is created." << endl;
    }
    ~Car(){
        cout << "A car object is destroyed." << endl;
    }
};
int main(){
    Car myCar;
    return 0;
}