#include <iostream>
#include <cctype> // For tolower()

using namespace std;

int main() {
    char grade;

    cout << "Enter the grade: ";
    cin >> grade;

    // Convert input to uppercase for case-insensitive comparison
    grade = toupper(grade);

    switch (grade) {
        case 'E':
            cout << "You have chosen: Excellent" << endl;
            break;
        case 'V':
            cout << "You have chosen: Very Good" << endl;
            break;
        case 'G':
            cout << "You have chosen: Good" << endl;
            break;
        case 'A':
            cout << "You have chosen: Average" << endl;
            break;
        case 'F':
            cout << "You have chosen: Fail" << endl;
            break;
        default:
            cout << "Invalid grade entered." << endl;
    }

    return 0;
}
