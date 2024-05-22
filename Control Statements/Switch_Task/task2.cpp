#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Handle invalid input (negative numbers)
    if (num < 1) {
        cout << "Invalid input: Please enter a non-negative integer." << endl;
        return 1; // Indicate error
    }

    switch (num) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << num << " is between 1 - 5" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << num << " is between 6 - 10" << endl;
            break;
        default:
            cout << num << " is greater than 10" << endl;
    }

    return 0;
}
