#include <iostream>

using namespace std;

int main() {
    int dayNumber;

    cout << "Enter day number (1-7): ";
    cin >> dayNumber;

    string dayName;

    // Use an array to map day numbers to names
    string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Validate input and handle invalid day numbers
    if (dayNumber < 1 || dayNumber > 7) {
        cout << "Invalid day number. Please enter a number between 1 and 7." << endl;
    } else {
        // Access the corresponding element in the array based on the day number (index is 0-based)
        dayName = days[dayNumber - 1];
        cout << "Day name: " << dayName << endl;
    }

    return 0;
}
