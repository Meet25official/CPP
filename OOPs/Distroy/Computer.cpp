#include<iostream>
#include<string>
using namespace std;

class Computer{
    private:
    string name;
    int price;
    int year;

    public:
    Computer(string n , int p , int y){
        name = n;
        price = p;
        year = y;
        cout << "Constructer called." << endl;
    }
    void display(){
        cout << "The name of computer company:- " << name << endl;
        cout << "The price of computer:- " << price << endl;
        cout << "The model year of this computer is:- " << year << endl;
    }
    ~Computer(){
        cout << "Destructor called." << endl;
        cout << "The details of this computer company name:- " << name << " , price:- " << price << " and model year:- " << year << " are destroyed." << endl;
    }
};

int main(){
    Computer obj("SAMSUNG" , 72000 , 2024);
    cout << "The Computer details before distruction:- " << endl;
    obj.display();
    return 0;
}