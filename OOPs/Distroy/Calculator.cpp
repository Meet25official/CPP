
#include<iostream>
#include<string>
using namespace std;

class Calculater{
    private:
        string name;
        int price;
        int year;

    public:
    Calculater(string n , int p , int y){
        name = n;
        price = p;
        year = y;
        cout << "Constructer called." << endl;
    }
    void display(){
        cout << "The name of calculater company:- " << name << endl;
        cout << "The price of calculater:- " << price << endl;
        cout << "The model year of this calculater is:- " << year << endl;
    }
    ~Calculater(){
        cout << "Destructor called." << endl;
        cout << "The details of this calculater company name:- " << name << " , price:- " << price << " and model year:- " << year << " are destroyed." << endl;
    }
};

int main(){
    Calculater obj("Casio" , 420 , 2024);
    cout << "The Carlculater details before distruction:- " << endl;
    obj.display();
    return 0;
}
