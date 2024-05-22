#include <iostream>

using namespace std;

int main() {
    int side1, side2, side3;

    // Prompt the user to enter the sides
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // Check triangle validity (sum of any two sides > third side)
    if (side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2) {
        cout << "Invalid triangle: The sum of any two sides must be greater than the third side." << endl;
        return 1; // Indicate failure
    }

    // Check triangle type
    if (side1 == side2 && side2 == side3) {
        cout << "This is an equilateral triangle." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "This is an isosceles triangle." << endl;
    } else {
        cout << "This is a scalene triangle." << endl;
    }

    return 0; // Indicate success
}
