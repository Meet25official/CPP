// 1. Cuisine Management System:
//    - Problem: Design a system to manage different cuisines offered by a restaurant.
//    - Test Case: Ensure that each cuisine can calculate the total cost of its dishes.
//    - Logic: Create an abstract class 'Cuisine' with methods for adding dishes and calculating total cost. Subclasses like 'ItalianCuisine', 'ChineseCuisine', etc., implement specific dish addition and cost calculation logic.

#include <iostream>
using namespace std;

class Cuisine {
protected:
    string cuisine_name;
    double cost;

public:
    Cuisine(string cn, double c):cuisine_name(cn),cout(c){}

    virtual void display()=0;

    virtual string getCuisine_Name(){
        return cuisine_name;
    }

    virtual double getCoust(){
        return cout;
    }
};

class ItalianCuisine


// class Cuisine {
// public:
//     virtual void addDish(string dish) = 0;
//     virtual double calculateTotalCost() = 0;
// };

// class ItalianCuisine : public Cuisine {
// private:
//     int italianDishesCount;
// public:
//     ItalianCuisine() : italianDishesCount() {}

//     void addDish(string dish) {
//         italianDishesCount++;
//     }
//     double calculateTotalCost() {
        
//         return italianDishesCount * 10;
//     }
// };

// class ChineseCuisine : public Cuisine {
// private:
//     int chineseDishesCount;
// public:
//     ChineseCuisine() : chineseDishesCount() {}

//     void addDish(string dish) {
//         chineseDishesCount++;
//     }
//     double calculateTotalCost() {
     
//         return chineseDishesCount * 12;
//     }
// };

// int main() {
 
//     ItalianCuisine italian;
//     italian.addDish("Spaghetti");
//     italian.addDish("Pizza");
//     cout << "Total cost of Italian: $" << italian.calculateTotalCost() << endl;

//     ChineseCuisine chinese;
//     chinese.addDish("Kung Pao Chicken");
//     chinese.addDish("Fried Rice");
//     cout << "Total cost of Chinese: $" << chinese.calculateTotalCost() << endl;

//     return 0;
// }


