#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the largest number using nested if-else statements
    int largest;
    if (num1 >= num2) {
        largest = num1;
    } else {
        largest = num2;
    }

    if (largest >= num3) {
        cout << "The 3rd Number is the greatest among three\n";
    } else {
        cout << "The 1st Number is the greatest among three\n";
    }

    // Display the original input numbers for clarity
    cout << "1st Number = " << num1 << ",\t";
    cout << "2nd Number = " << num2 << ",\t";
    cout << "3rd Number = " << num3 << endl;

    return 0;
}
