
#include<iostream>
#include<string>
using namespace std;

class ShoppingCart{
    private:
    string name;
    float price;

    public:
    ShoppingCart(string n , float p){
        name = n;
        price = p;
        cout << "Constructer called." << endl;
    }
    void display(){
        cout << "The name of Product:- " << name << endl;
        cout << "The price of Product:- " << price << endl;
    }
    ~ShoppingCart(){
        cout << "Destructor called." << endl;
        cout << "The details of this Products name:- " << name << " , price:- " << price << " are destroyed." << endl;
    }
};

int main(){
    ShoppingCart obj("Sut" , 4999.99);
    cout << "The Shopping Products details before distruction:- " << endl;
    obj.display();
    return 0;
}
