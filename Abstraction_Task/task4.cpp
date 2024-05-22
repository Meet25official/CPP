
//4. Diet Planner Application:
//   - Problem: Develop an application to help users plan their diet by selecting meals from different cuisines.
//   - Test Case: Verify that the total calorie count of a selected meal plan is accurate.
//   - Logic: Create an abstract class 'Meal' with methods to calculate total calories. Subclasses like 'Breakfast', 'Lunch', 'Dinner', etc., implement calorie calculation logic based on the chosen cuisine.

#include<iostream>
using namespace std;

class Meal{
protected:
    string name;
    int calories;
public:
    Meal(string n, int cal){
        name = n;
        calories = cal;
    }

    virtual int calculateCalories() = 0;
};

class BreakFast : public Meal{
public:
    BreakFast(string name,int calories): Meal(name,calories){}

    int calculateCalories()override{
        return calories;
    }
};

class Lunch : public Meal{
public:
    Lunch(string name,int calories): Meal(name,calories){}
    
    int calculateCalories()override{
        return calories;
    }
};

class Dinner : public Meal{
public:
    Dinner(string name,int calories): Meal(name,calories){}
    
    int calculateCalories()override{
        return calories;
    }
};

int main(){
    BreakFast br("Tea-Biscuit" , 350);
    Lunch lu("Shak-Rotala" , 450);
    Dinner di("khichadi" , 120);

    int choice;
    cout << "1------------------->Breakfast" << endl;
    cout << "1------------------->Lunch" << endl;
    cout << "3------------------->Dinner" << endl;
    cout << "4------------------->Total Calories" << endl;
    cout << endl << "Enter the your choice for show calories of other food:-" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1: cout << "The calories of Breakfast food is " << br.calculateCalories() << endl;   
            break;
    
    case 2: cout << "The calories of Lunch food is " << lu.calculateCalories() << endl;   
            break;
    
    case 3: cout << "The calories of Dinner food is " << di.calculateCalories() << endl;   
            break;

    case 4: cout << "The total calories of this food is " <<  br.calculateCalories() + lu.calculateCalories() + di.calculateCalories() << endl;   
            break;

    default:  cout << "Invailid Choice!!!" << endl;
              break;
    }
    return 0;
}
