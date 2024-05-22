#include <iostream>
#include <string>

using namespace std;

int main() {
  int choice, size;
  string drinkName;

  do {
    cout << "\n\nWelcome to Starbucks!\n";

    // Display menu options
    cout << "1. Coffee\n";
    cout << "2. Tea\n";
    cout << "3. Milk\n";
    cout << "4. Juice\n";
    cout << "5. Water\n";
    cout << "6. Soda\n";
    cout << "7. Exit\n";

    // Get user choice
    cout << "Enter your choice (1-7): ";
    cin >> choice;

    switch (choice) {
      case 1: // Coffee
        cout << "\nCoffee:\n";
        cout << "1. Cappuccino\n";
        cout << "2. Latte\n";
        cout << "3. Espresso\n";
        cout << "4. Americano\n";
        cout << "5. Mocha\n";

        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
          case 1:
            drinkName = "Cappuccino";
            break;
          case 2:
            drinkName = "Latte";
            break;
          case 3:
            drinkName = "Espresso";
            break;
          case 4:
            drinkName = "Americano";
            break;
          case 5:
            drinkName = "Mocha";
            break;
          default:
            cout << "Invalid choice.\n";
            continue;
        }

        // Get size option
        cout << "\n1. Small\n";
        cout << "2. Medium\n";
        cout << "3. Large\n";
        cout << "Enter your choice (1-3): ";
        cin >> size;

        switch (size) {
          case 1:
            cout << "You ordered a small " << drinkName << ".\n";
            break;
          case 2:
            cout << "You ordered a medium " << drinkName << ".\n";
            break;
          case 3:
            cout << "You ordered a large " << drinkName << ".\n";
            break;
          default:
            cout << "Invalid choice.\n";
            continue;
        }

        break;

      // Similar logic for other choices (2-6) can be implemented here

      case 7: // Exit
        cout << "Thank you for visiting Starbucks!\n";
        break;

      default:
        cout << "Invalid choice.\n";
        break;
    }
  } while (choice != 7); // Loop until user chooses to exit

  return 0;
}
