// 3. Animal Kingdom:
//    Develop a program to represent various animals and their characteristics. Animals can be categorized based on their species (e.g., mammal, bird) and their habitat (e.g., land, aquatic). Implement the system using hybrid inheritance.
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string species;
public:
    Animal(string _species) : species(_species) {}
    virtual void display() = 0; 
};

// Base class for habitats
class Habitat {
protected:
    string habitatType;
public:
    Habitat(string _habitatType) : habitatType(_habitatType) {}
    virtual void displayHabitat() = 0; 
};

class Mammal : public Animal {
public:
    Mammal(string _species) : Animal(_species) {}
    void display() override {
        cout << "Species: " << species << endl;
    }
};

class LandMammal : public Mammal, public Habitat {
public:
    LandMammal(string _species, string _habitatType) : Mammal(_species), Habitat(_habitatType) {}
    void displayHabitat() override {
        cout << "Habitat: " << habitatType << endl;
    }
};

int main() {
    LandMammal lion("Lion", "Land");
    lion.display();
    lion.displayHabitat();
    
    return 0;
}

