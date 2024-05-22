// 5. Create a class named "Car" with data members for make, model, and year. Implement methods to input car details, update year, and display the car's specifications.


#include<iostream>
using namespace std;

class Car{
    string make;
    string model;
    int year;

public:
    void inputCarDetails(){
        cout << "Enter car make: ";
        cin >> make;
        cout << "Enter car model: ";
        cin >> model;
        cout << "Enter car year: ";
        cin >> year;
    }

    void updateYear(int newYear){
        if(newYear >=1886){
            year = newYear;
            cout << "Year updated successfully. New year is: " << year << endl;
        }
        else{
            cout << "Invalid year. Year should be 1886 or later." << endl;
        }
    }

    void displaySpecifications(){
        cout << "Car Specifications:" << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main(){

    Car myCar;
    myCar.inputCarDetails();
    myCar.displaySpecifications();
    myCar.updateYear(2024);

    return 0;
}