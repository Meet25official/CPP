#include <iostream>
#include <string>
using namespace std;

class Car {
private:
  string make;
  string model;
  int year;

public:
  // Method to input car details
  void inputDetails() {
    cout << "Enter car make: ";
    getline(cin >> ws, make); // Skip newline from previous input

    cout << "Enter car model: ";
    getline(cin >> ws, model);

    cout << "Enter car year: ";
    cin >> year;
  }

  // Method to update car year
  void updateYear(int newYear) {
    if (newYear >= 1886) { // Assuming cars weren't common before 1886
      year = newYear;
      cout << "Year updated successfully! New year: " << year << endl;
    } else {
      cout << "Invalid year. Please enter a valid year (1886 or later)." << endl;
    }
  }

  // Method to display car specifications
  void displaySpecs() {
    cout << "\nCar Make: " << make << endl;
    cout << "Car Model: " << model << endl;
    cout << "Car Year: " << year << endl;
  }
};

int main() {
  Car car;

  // Input car details
  car.inputDetails();

  int choice;
  int newYear;

  do {
    cout << "\nCar Menu:\n";
    cout << "1. Update Year\n";
    cout << "2. Display Car Specifications\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter new year: ";
        cin >> newYear;
        car.updateYear(newYear);
        break;
      case 2:
        car.displaySpecs();
        break;
      case 3:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
    }
  } while (choice != 3);

  return 0;
}
