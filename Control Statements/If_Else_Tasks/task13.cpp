#include <iostream>

using namespace std;

int main() {
    float temperature;

    // Prompt the user to enter the temperature
    cout << "Enter the temperature in centigrade: ";
    cin >> temperature;

    // Display message based on temperature range using an if-else chain
    if (temperature < 0) {
        cout << "Freezing weather" << endl;
    } else if (temperature >= 0 && temperature <= 10) {
        cout << "Very Cold weather" << endl;
    } else if (temperature > 10 && temperature <= 20) {
        cout << "Cold weather" << endl;
    } else if (temperature > 20 && temperature <= 30) {
        cout << "Normal in Temp" << endl;
    } else if (temperature > 30 && temperature <= 40) {
        cout << "Its Hot" << endl;
    } else {
        cout << "Its Very Hot" << endl;
    }

    return 0;
}
