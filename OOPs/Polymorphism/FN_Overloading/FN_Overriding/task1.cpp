#include<iostream>

using namespace std;

class Product{
    protected:
        string name;
        double price;
        string description;
    public:
        Product(const string& n,double p,const string& desc):name(n),price(p),description(desc){}

void displayInfo(){
    cout<<"Product Name: "<<name<<endl;
    cout<<"Price: $"<<price<<endl;
    cout<<"Description: "<<description<<endl;
}
};
class PhysicalProduct : public Product {
private:
    double weight;
    double shippingCost;
    string deliveryTime;

public:
    PhysicalProduct(const string& n, double p, const string& desc,
                    double w, double cost, const string& time)
        : Product(n, p, desc), weight(w), shippingCost(cost), deliveryTime(time) {}

    void displayInfo() {
        Product::displayInfo();
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Shipping Cost: $" << shippingCost << endl;
        cout << "Delivery Time: " << deliveryTime << endl;
    }
};
class DigitalProduct : public Product {
    DigitalProduct(const string& n, double p, const string& desc,
                    double w, double cost, const string& time)
        : Product(n, p, desc), downloadLinks(d) {}
    void displayInfo() {
        
    }
}; 
