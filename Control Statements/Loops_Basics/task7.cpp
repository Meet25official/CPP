#include <iostream>

using namespace std;

int main() {
    int num, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    // Handle negative numbers
    if (num < 0) {
        num *= -1; // Make num positive for calculation
        cout << "Sum of odd digits of the absolute value: ";
    } else {
        cout << "Sum of odd digits: ";
    }

    // Calculate sum of odd digits
    while (num > 0) {
        digit = num % 10; // Extract the last digit
        if (digit % 2 != 0) { // Check if digit is odd
            sum += digit;
        }
        num /= 10; // Remove the last digit from num
    }

    cout << sum << endl;

    return 0;
}
