// 3. Online Food Ordering System:
//    - Problem: Create a system for customers to order food online from multiple restaurants.
//    - Test Case: Ensure that the total cost of an order includes taxes and delivery charges.
//    - Logic: Define an abstract class 'FoodItem' with methods to calculate the price including taxes. Subclasses like 'Pizza', 'Sushi', etc., implement specific price calculation logic and apply taxes accordingly.

#include <iostream>
using namespace std;

class FoodItem {
protected:
    string name;
    double price;
public:
    FoodItem(string name, double price) : name(name), price(price) {}
    virtual double calculatePrice() const = 0; 
    virtual ~FoodItem() {}
};

class Pizza : public FoodItem {
public:
    Pizza(string name, double price) : FoodItem(name, price) {}

    double calculatePrice() const override {
        double taxRate = 0.10;
        double totalPrice = price + (price * taxRate);
        return totalPrice;
    }
};

class Sushi : public FoodItem {
public:
    Sushi(string name, double price) : FoodItem(name, price) {}

    double calculatePrice() const override {
        double taxRate = 0.08;
        double totalPrice = price + (price * taxRate);
        return totalPrice;
    }
};

class OnlineOrder {
private:
    FoodItem* item;
    double deliveryCharge;
public:
    OnlineOrder(FoodItem* item, double deliveryCharge) : item(item), deliveryCharge(deliveryCharge) {}

    double calculateTotalCost() const {
        double totalPrice = item->calculatePrice();
        double totalCost = totalPrice + deliveryCharge;
        return totalCost;
    }

    ~OnlineOrder() {
        delete item;
    }
};

int main() {
    
    Pizza* pizza = new Pizza("Pepperoni Pizza", 12.99);
    OnlineOrder order1(pizza, 3.00); 
    cout << "Total cost for Pizza: $" << order1.calculateTotalCost() << endl;

    Sushi* sushi = new Sushi("Salmon Sushi Roll", 9.99);
    OnlineOrder order2(sushi, 2.50); 
    cout << "Total cost for Sushi: $" << order2.calculateTotalCost() << endl;

    return 0;
}
