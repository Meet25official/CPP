#include <iostream>

using namespace std;

int main() {
    int monthNumber;

    cout << "Enter month number (1-12): ";
    cin >> monthNumber;

    if (monthNumber < 1 || monthNumber > 12) {
        cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
    } else {
        int days;
        // Use an array to store days in different months (excluding February)
        int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Handle February separately and consider leap years
        if (monthNumber == 2) {
            days = 28;
            if (monthNumber % 4 == 0 && (monthNumber % 100 != 0 || monthNumber % 400 == 0)) {
                days = 29; // Leap year
            }
        } else {
            // Access days from the array for other months
            days = monthDays[monthNumber - 1];
        }

        cout << "Month " << monthNumber << " has " << days << " days." << endl;
    }

    return 0;
}
