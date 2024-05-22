#include <iostream>
#include <string>
using namespace std;

class Book {
private:
  string title;
  string author;
  double price;

public:
  // Method to input book details
  void inputDetails() {
    cout << "Enter book title: ";
    getline(cin >> ws, title); // Skip newline from previous input

    cout << "Enter book author: ";
    getline(cin >> ws, author);

    cout << "Enter book price: ";
    cin >> price;
  }

  // Method to update book price
  void updatePrice(double newPrice) {
    if (newPrice >= 0) {
      price = newPrice;
      cout << "Price updated successfully! New price: $" << price << endl;
    } else {
      cout << "Invalid price. Please enter a non-negative value." << endl;
    }
  }

  // Method to display book information
  void displayInfo() {
    cout << "\nBook Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: $" << price << endl;
  }
};

int main() {
  Book book;

  // Input book details
  book.inputDetails();

  int choice;
  double newPrice;

  do {
    cout << "\nBook Menu:\n";
    cout << "1. Update Price\n";
    cout << "2. Display Book Information\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter new price: ";
        cin >> newPrice;
        book.updatePrice(newPrice);
        break;
      case 2:
        book.displayInfo();
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
