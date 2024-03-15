#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    // Handle invalid input (negative or zero)
    if (n <= 0) {
        cout << "Invalid input: Please enter a positive integer." << endl;
        return 1; // Indicate error
    }

    int a = 0, b = 1, nextTerm;

    // Print the first two terms (special cases)
    cout << a << ", " << b;

    // Print the remaining terms using a loop
    for (int i = 2; i < n; ++i) {
        nextTerm = a + b;
        cout << ", " << nextTerm;
        a = b;
        b = nextTerm;
    }

    cout << endl;

    return 0;
}
