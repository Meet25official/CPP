#include <iostream>

using namespace std;

int main() {
    // Declare variables
    double centimeters, meters, kilometers;

    // Display a message for user input
    cout << "Convert centimeter into meter and kilometer :\n";
    cout << "--------------------------------------------------\n";
    cout << "Input the distance in centimeter : ";

    // Read input from user
    cin >> centimeters;

    // Convert centimeters to meters and kilometers (1 meter = 100 centimeters, 1 kilometer = 1000 meters)
    meters = centimeters / 100.0;
    kilometers = meters / 1000.0;

    // Display the converted values with appropriate units
    cout << "The distance in meter is: " << meters << endl;
    cout << "The distance in kilometer is: " << kilometers << endl;

    return 0;
}
