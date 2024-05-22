#include<iostream>
#include<string>

using namespace std;

class Car {
    private :
        string modal;
        int year;

    public :
        Car(string m , int y){
            modal = m;
            year = y;
            cout << "Constructor called..." << endl;
        }

        void display(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }

    ~Car() {
        cout << "Destructor called..." << endl;
        cout << "The book '" << title << "' by " << author << " published in " << year  << " has been destroyed." << endl;
    }
};