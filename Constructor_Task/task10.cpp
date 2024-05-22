// 10. Create a class to represent a computer with member variables for brand, model, and price. Write a constructor that initializes these variables when an object of the class is instantiated.

#include<iostream>
using namespace std;

class Computer{
    private:
    string brand;
    string model;
    double price;

    public:
    Computer(string b, string m, double p){
        brand = b;
        model = m;
        price = p;
    }
    void displayComputerInfo(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
    }
};
int main(){
    Computer myComputer("Apple", "MacBook Air", 1299.99);
    myComputer.displayComputerInfo();
    return 0;
}