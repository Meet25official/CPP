
//3. Online Food Ordering System:
//   - Problem: Create a system for customers to order food online from multiple restaurants.
//   - Test Case: Ensure that the total cost of an order includes taxes and delivery charges.
//   - Logic: Define an abstract class 'FoodItem' with methods to calculate the price including taxes. Subclasses like 'Pizza', 'Sushi', etc., implement specific price calculation logic and apply taxes accordingly.

#include<iostream>
using namespace std;

class FoodItem{
protected:
    double price;
    double delivery;
public:
    FoodItem(double p, double d){
        price = p;
        delivery = d;
    }
    virtual double totalPrice() = 0;
};

class Pizza : public FoodItem{
public:
    Pizza(double pr, double de): FoodItem(pr , de){}
    double totalPrice()override{
        double total = price + delivery + (price*0.18);
        cout << total << endl;
        return total;
    }
};

class Sushi : public FoodItem{
public:
    Sushi(double pr, double de): FoodItem(pr , de){}
    double totalPrice()override{
        double total = price + delivery + (price*0.18);
        return total;
    }
};

int main(){

    Pizza pizza(599,90);  
    Sushi sushi(399,98);

    cout << "The total price (including delivery charge and taxes) of Pizza is:- " << pizza.totalPrice() << endl;
    cout << "The total price (including delivery charge and taxes) of Sushi is:- " << sushi.totalPrice() << endl;

    return 0;
}
