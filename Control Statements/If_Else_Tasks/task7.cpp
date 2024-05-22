// #include <iostream>

// using namespace std;

// int main() {
//     float height;

//     // Prompt the user to enter their height
//     cout << "Enter the height (in centimeters): ";
//     cin >> height;

//     // Define categories and their corresponding height ranges
//     const int dwarfMax = 150;
//     const int averageMin = 151;
//     const int averageMax = 165;
//     const int tallMin = 166;

//     // Determine the category based on the height
//     if (height < dwarfMax) {
//         cout << "The person is Dwarf." << endl;
//     } else if (height >= averageMin && height <= averageMax) {
//         cout << "The person is of Average Height." << endl;
//     } else if (height >= tallMin) {
//         cout << "The person is Tall." << endl;
//     } else {
//         cout << "The person has an abnormal height." << endl;
//     }

//     return 0;
// }

// -------------------------------------------------------------------------


#include <iostream>

using namespace std;

string categorizeHeight(int height) {
    if (height < 120) {
        return "Dwarf";
    } else if (height < 150) {
        return "Short";
    } else if (height < 180) {
        return "Average";
    } else if (height < 190) {
        return "Tall";
    } else {
        return "Giant";
    }
}

int main() {
    int height;

    cout << "Enter the height of the person in centimeters: ";
    cin >> height;

    if (cin.fail()) {
        cout << "Invalid input. Please enter a number.";
        return 1;
    }

    cout << "The person is " << categorizeHeight(height) << ".\n";

    return 0;
}