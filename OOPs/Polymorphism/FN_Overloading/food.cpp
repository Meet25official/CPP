#include <iostream>
#include <string>
using namespace std;

class MenuItem {
private:
    string name;
    float price;

public:
    MenuItem(const string& itemName, float itemPrice) : name(itemName), price(itemPrice) {}

    string getName() const {
        return name;
    }

    float getPrice() const {
        return price;
    }
};

class Order {
private:
    string orderedItems;
    float totalAmount;

public:
    Order() : totalAmount(0.0) {}

    void placeOrder(const MenuItem& item) {
        orderedItems += item.getName() + ", ";
        totalAmount += item.getPrice();
    }

    void placeOrder(const MenuItem& item1, const MenuItem& item2) {
        orderedItems += item1.getName() + ", " + item2.getName() + ", ";
        totalAmount += item1.getPrice() + item2.getPrice();
    }

    void displayOrder() const {
        cout << "Ordered items: " << orderedItems << endl;
        cout << "Total amount: $" << totalAmount << endl;
    }
};

int main() {
    
    MenuItem pizza("Pizza", 10.99);
    MenuItem burger("Burger", 5.99);
    MenuItem pasta("Pasta", 8.49);

    Order myOrder;

    myOrder.placeOrder(pizza);
    myOrder.placeOrder(burger, pasta);

    myOrder.displayOrder();

    return 0;
}
