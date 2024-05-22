#include <iostream>
#include <string>

using namespace std;

int main() {
    int digit;

    cout << "Enter a digit (0-9): ";
    cin >> digit;

    if (digit < 0 || digit > 9) {
        cout << "Invalid digit. Please enter a number between 0 and 9." << endl;
    } else {
        // Array to store word equivalents of digits
        string digitWords[] = {"Zero", "One", "Two", "Three", "Four",
                              "Five", "Six", "Seven", "Eight", "Nine"};
        
        // Access the corresponding word using an index
        cout << digitWords[digit] << endl;
    }

    return 0;
}
