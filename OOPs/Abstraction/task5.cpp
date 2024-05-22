// 5. Restaurant Rating System:
//    - Problem: Build a system to rate and review restaurants based on the quality of their dishes.
//    - Test Case: Ensure that each restaurant can be rated based on the taste and presentation of its dishes.
//    - Logic: Define an abstract class 'Restaurant' with methods to calculate average ratings. Subclasses like 'ItalianRestaurant', 'ChineseRestaurant', etc., implement rating calculation logic based on customer reviews.

#include<iostream>
using namespace std;

class Restaurant {

public:
    string name;
    Restaurant(string name) : name(name) {}
    virtual double calculateAverageTasteRating() = 0;
    virtual double calculateAveragePresentationRating() = 0;
    virtual double calculateOverallRating() = 0;
    virtual ~Restaurant() {} 
};

class ItalianRestaurant : public Restaurant {
public:
    ItalianRestaurant(string name) : Restaurant(name) {}

    double calculateAverageTasteRating() override {
        return 4.5; 
    }

    double calculateAveragePresentationRating() override {
        return 4.2; 
    }

    double calculateOverallRating() override {
        double avgTaste = calculateAverageTasteRating();
        double avgPresentation = calculateAveragePresentationRating();
        return (avgTaste + avgPresentation) / 2;
    }
};

class ChineseRestaurant : public Restaurant {
public:
    ChineseRestaurant(string name) : Restaurant(name) {}

    double calculateAverageTasteRating() override {
        return 4.3; 
    }

    double calculateAveragePresentationRating() override {
        return 4.0; 
    }

    double calculateOverallRating() override {
        double avgTaste = calculateAverageTasteRating();
        double avgPresentation = calculateAveragePresentationRating();
        return (avgTaste + avgPresentation) / 2;
    }
};

int main() {
    ItalianRestaurant italianRestaurant("Gusto Italiano");
    cout << "Average Taste Rating for " << italianRestaurant.name << ": " << italianRestaurant.calculateAverageTasteRating() << endl;
    cout << "Average Presentation Rating for " << italianRestaurant.name << ": " << italianRestaurant.calculateAveragePresentationRating() << endl;
    cout << "Overall Rating for " << italianRestaurant.name << ": " << italianRestaurant.calculateOverallRating() << endl;

    ChineseRestaurant chineseRestaurant("Chopsticks");
    cout << "Average Taste Rating for " << chineseRestaurant.name << ": " << chineseRestaurant.calculateAverageTasteRating() << endl;
    cout << "Average Presentation Rating for " << chineseRestaurant.name << ": " << chineseRestaurant.calculateAveragePresentationRating() << endl;
    cout << "Overall Rating for " << chineseRestaurant.name << ": " << chineseRestaurant.calculateOverallRating() << endl;

    return 0;
}
