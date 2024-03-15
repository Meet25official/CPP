#include <iostream>
#include <string>

using namespace std;

int main() {
    int monthNumber;

    cout << "Enter month number (1-12): ";
    cin >> monthNumber;

    if (monthNumber < 1 || monthNumber > 12) {
        cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
    } else {
        // Array of month names
        string monthNames[] = {"January", "February", "March", "April", "May",
                              "June", "July", "August", "September", "October",
                              "November", "December"};

        // Access the corresponding word using a zero-based index (month number - 1)
        cout << "Month name: " << monthNames[monthNumber - 1] << endl;
    }

    return 0;
}
