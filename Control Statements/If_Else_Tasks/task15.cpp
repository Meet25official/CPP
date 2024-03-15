#include <iostream>

using namespace std;

int main() {
    int angle1, angle2, angle3;

    // Prompt the user to enter the angles
    cout << "Enter the three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    // Check if the sum of angles is equal to 180 degrees
    if (angle1 + angle2 + angle3 != 180) {
        cout << "The triangle is not valid. The sum of angles in a triangle must be 180 degrees." << endl;
    } else {
        // Check if each angle is positive
        if (angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
            cout << "The triangle is not valid. Each angle must be a positive value." << endl;
        } else {
            cout << "The triangle is valid." << endl;
        }
    }

    return 0;
}
