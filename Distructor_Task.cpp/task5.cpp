// 5. Design a class representing a computer. Implement a destructor that prints a message when a computer object is destroyed.

#include<iostream>
using namespace std;

class Computer{
    private:
    string brand;
    int year;
    
    public:
    Computer(string b, int y){
        brand = b;
        year = y;
    }
    void displayComputerInfo(){
        cout << "Brand name is : " << brand << endl;
        cout << "Year of purchase is : " << year << endl;
    }
    ~Computer(){
        cout << "computer object is destroyed." << endl;
    }
};
int main(){
    Computer c1("Lenovo", 2022);
    c1.displayComputerInfo();
    return 0;
}