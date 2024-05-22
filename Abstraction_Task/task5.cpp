// 5. Restaurant Rating System:
//    - Problem: Build a system to rate and review restaurants based on the quality of their dishes.
//    - Test Case: Ensure that each restaurant can be rated based on the taste and presentation of its dishes.
//    - Logic: Define an abstract class 'Restaurant' with methods to calculate average ratings. Subclasses like 'ItalianRestaurant', 'ChineseRestaurant', etc., implement rating calculation logic based on customer reviews.

#include <iostream>
using namespace std;

class Restaurant {
public:
   string name;

    Restaurant(string n) : name(n) {}
    virtual double calculateAvgTasteRate() = 0;
    virtual double calAvgPreRate() = 0;
    virtual double calOverallRate() = 0;
};

class ItalianRestaurant : public Restaurant {
public:
    ItalianRestaurant(string n) : Restaurant(n) {}

    double calculateAvgTasteRate() override {
        return 4.4; 
    }

    double calAvgPreRate() override {
        return 4.1; 
    }

    double calOverallRate() override {
        double avgTaste = calculateAvgTasteRate();
        double avgPresentation = calAvgPreRate();
        return (avgTaste + avgPresentation) / 2;
    }
};

class ChineseRestaurant : public Restaurant {
public:
    ChineseRestaurant(string n) : Restaurant(n) {}

    double calculateAvgTasteRate() override {
        return 4.3; 
    }

    double calAvgPreRate() override {
        return 4.0; 
    }

    double calOverallRate() override {
        double avgTaste = calculateAvgTasteRate();
        double avgPresentation = calAvgPreRate();
        return (avgTaste + avgPresentation) / 2;
    }
};

int main() {
    ItalianRestaurant obj1("Italian Pizza");
    cout << "Average Taste Rating for " << obj1.name << ": " << obj1.calculateAvgTasteRate() << endl;
    cout << "Average Presentation Rating for " << obj1.name << ": " << obj1.calAvgPreRate() << endl;
    cout << "Overall Rating for " << obj1.name << ": " << obj1.calOverallRate() << endl;

    ChineseRestaurant obj2("Manchurine");
    cout << "Average Taste Rating for " << obj2.name << ": " << obj2.calculateAvgTasteRate() << endl;
    cout << "Average Presentation Rating for " << obj2.name << ": " << obj2.calAvgPreRate() << endl;
    cout << "Overall Rating for " << obj2.name << ": " << obj2.calOverallRate() << endl;

    return 0;
}