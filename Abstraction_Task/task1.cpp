//1. Cuisine Management System:
 //  - Problem: Design a system to manage different cuisines offered by a restaurant.
 //  - Test Case: Ensure that each cuisine can calculate the total cost of its dishes.
 //  - Logic: Create an abstract class 'Cuisine' with methods for adding dishes and calculating total  cost. Subclasses like 'ItalianCuisine', 'ChineseCuisine', etc., implement specific dish addition and cost calculation logic.

 #include<iostream>
 using namespace std;

class Cuisines{
protected:
    string name;
    double price;
public:
    Cuisines(string n, double p): name(n) , price(p){}
    
    virtual void addDishes(Cuisines*) = 0;
    virtual void calculateTotal() = 0;
    virtual void display() = 0;
    virtual double getPrice(){
        return price;
    }
};

class ItalianCuisine : public Cuisines{
public:
    ItalianCuisine(string n , double p): Cuisines(name,price){}

    void display()override{
        cout << "Dish:- " << name << "And Price:- " << price << endl;
    }
};

class ChineseCuisine : public Cuisines{
public:
    ChineseCuisine(string n , double p): Cuisines(name,price){}

    void display()override{
        cout << "Dish:- " << name << "And Price:- " << price << endl;
    }
};

class Management{
private:
    Cuisines **Items;
    int capacity;
    int size;
public:
    Management(int cap): size(0) , capacity(cap){
        Items = new Cuisines*[capacity];
    }
    ~Management(){
        for (int i = 0; i < size; i++)
        {
            delete Items[i];
        }
        delete[] Items;
    }

    void addDishes(Cuisines *obj){
        if(size < capacity){
            Items[size++] = obj; 
        }
        else{
            cout << "Capicity is full" << endl;
        }
    }

    void calculateTotal(){
        double Total = 0.0;
        for (int i = 0; i < size; i++)
        {
            Total += Items[i]->getPrice();
        }
    }
};

int main(){

    Management obj1(3);
    obj1.addDishes(new ItalianCuisine("asd" , 500));
    return 0;
}