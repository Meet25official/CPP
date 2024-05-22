#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound();
};

class Mammal : public Animal {
public:
    void makeSound(){
        cout << "Mammal makes a sound" << endl;
    }
};

class Bird : public Animal {
public:
    void makeSound(){
        cout << "Bird makes a sound" << endl;
    }
};

class Reptile : public Animal {
public:
    void makeSound(){
        cout << "Reptile makes a sound" << endl;
    }
};

int main() {
    Mammal mammal;
    Bird bird;
    Reptile reptile;

    mammal.makeSound();
    bird.makeSound();
    reptile.makeSound();

    return 0;
}
