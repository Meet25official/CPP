// 1. Create a class representing a car with member variables for make, model, and year. Write a default constructor that initializes these variables to default values.

#include<iostream>
using namespace std;

class Car{
    private:
    string make;
    string model;
    int year;

    public:
    Car(){
        make = "Toyota";
        model = "Camry";
        year = 2020;
    }

    void display(){
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main(){

    Car myCar;
    myCar.display();

    return 0;
}