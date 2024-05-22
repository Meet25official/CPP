// Inventory Management System:
//    Create an inventory management system for a retail store. Each store has multiple departments, and each department has multiple products. Implement classes for Store, Department, and Product. The Store class should aggregate Department objects, and each Department object should aggregate Product objects. Implement functionalities to add new products, display products in a particular department, and calculate total revenue generated by a store.

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;
public:
    Product(string name, double price, int quantity) : name(name), price(price), quantity(quantity) {}

    double getTotalPrice()  {
        return price * quantity;
    }

    void display()  {
        cout << "Name: " << name << ", Price: $" << price << ", Quantity: " << quantity << endl;
    }
};

class Department {
private:
    string name;
    Product* products[100];
    int numProducts;
public:
    Department(string name) : name(name), numProducts(0) {}

    void addProduct(const Product& product) {
        if (numProducts < 100) {
            products[numProducts++] = new Product(product);
        }
    }

    void displayProducts()  {
        cout << "Department: " << name << endl;
        for (int i = 0; i < numProducts; ++i) {
            products[i]->display();
        }
    }

    double getTotalRevenue() {
        double revenue = 0;
        for (int i = 0; i < numProducts; ++i) {
            revenue += products[i]->getTotalPrice();
        }
        return revenue;
    }

    string getName() {
        return name;
    }
};

class Store {
private:
    string name;
    Department* departments[10];
    int numDepartments;
public:
    Store(string name) : name(name), numDepartments(0) {}

    void addDepartment(const Department& department) {
        if (numDepartments < 10) {
            departments[numDepartments++] = new Department(department);
        }
    }

    void displayProductsInDepartment(const string& departmentName)  {
        cout << "Products in Department " << departmentName << ":" << endl;
        for (int i = 0; i < numDepartments; ++i) {
            if (departmentName == departments[i]->getName()) {
                departments[i]->displayProducts();
                return;
            }
        }
        cout << "Department not found." << endl;
    }

    double getTotalRevenue() {
        double totalRevenue = 0;
        for (int i = 0; i < numDepartments; ++i) {
            totalRevenue += departments[i]->getTotalRevenue();
        }
        return totalRevenue;
    }
};

int main() {
    Product product1("Shirt", 25, 50);
    Product product2("Jeans", 40, 30);
    Product product3("Shoes", 60, 20);

    Department clothing("Clothing");
    clothing.addProduct(product1);
    clothing.addProduct(product2);
    clothing.addProduct(product3);

    Product product4("Laptop", 1000, 10);
    Product product5("Tablet", 500, 15);

    Department electronics("Electronics");
    electronics.addProduct(product4);
    electronics.addProduct(product5);

    Store retailStore("My Retail Store");
    retailStore.addDepartment(clothing);
    retailStore.addDepartment(electronics);

    retailStore.displayProductsInDepartment("Clothing");
    cout << "Total Revenue: $" << retailStore.getTotalRevenue() << endl;

    return 0;
}
