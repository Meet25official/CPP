#include <iostream>

using namespace std;

int main() {
    int base, exponent, result = 1;

    cout << "Enter number & Power: ";
    cin >> base >> exponent;

    // Input validation: Ensure non-negative exponent
    if (exponent < 0) {
        cerr << "Error: Exponent cannot be negative." << endl;
        return 1; // Indicate error
    }

    // Efficient calculation using iterative approach:
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    cout << "Result of power: " << result << endl;

    return 0; // Indicate successful execution
}
