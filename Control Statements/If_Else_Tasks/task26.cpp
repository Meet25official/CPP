#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;

    cout << "Press 1 for addition\n";
    cout << "Press 2 for subtraction\n";
    cout << "Press 3 for multiplication\n";
    cout << "Press 4 for division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "The sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "The difference between " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "The multiplication of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "The division of " << num1 << " by " << num2 << " is: " << (float)num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
            break;
    }

    return 0;
}