// 4. Build a class representing a shopping cart. Include a destructor that displays a message when a shopping cart object is destroyed.

#include<iostream>
using namespace std;

class ShoppingCart{
    private:
    int count;
    public:
    ShoppingCart(){
        count = 0;
        cout << "Shopping cart created." << endl;
    }
    ~ShoppingCart(){
        cout << "Shopping cart destroyed." << endl;
    }
};
int main(){
    ShoppingCart cart1, cart2, cart3;
    return 0;
}