#include<iostream>
#include<string>
using namespace std;

const int MAX_ITEMS = 100;

class Item {
    public:
        string name;
        double price;
};

class ShoppingCart {
    private:
        Item items[MAX_ITEMS];
        int itemCount = 0;
    
    public:
        void addItem(string n, double p){
            if(itemCount < MAX_ITEMS) {
                items[itemCount].name = n;
                items[itemCount].price = p;
                itemCount++;
                cout << n << " added to the cart." << endl;
            } else {
                cout << "Connnot add more items. Cart is full." << endl;
            }
        }

        void removeItem(string name) {
            for(int i=0; i<itemCount; i++) {
                if(items[i].name == name) {
                    for(int j = i; j < itemCount-1;j++) {
                        items[j] = items[j+1];
                    }
                    itemCount--;
                    cout << name << " removed from the cart." << endl;
                    return;
                }
            }
            cout << name << "not found in the cart." << endl;
        }

        double calculateTotalPrice() const {
            double total = 0.0;
            for (int i=0; i<itemCount; i++) {
                total += items[i].price;
            }
            return total;
        }

        void displayItems() const {
            cout << "Items in the cart: " << endl;
            for (int i = 0; i < itemCount; i++)
            {
                cout << items[i].name << " - Rs." << items[i].price << endl;
            }
            
        }
};

int main() {
    ShoppingCart shoppingCart;

    shoppingCart.addItem("Shirt", 2499);
    shoppingCart.addItem("Jeans", 1599);
    shoppingCart.addItem("Shoes", 1999);

    shoppingCart.displayItems();

    cout << "Total Price: Rs." << shoppingCart.calculateTotalPrice() << endl;
    shoppingCart.removeItem("Jeans");
    shoppingCart.displayItems();

    cout << "Total Price: Rs." << shoppingCart.calculateTotalPrice() << endl;

    return 0;
}