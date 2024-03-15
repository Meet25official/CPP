#include <iostream>

using namespace std;

int main() {
    int m;

    // Prompt the user to enter the value of m
    cout << "Enter the value of m: ";
    cin >> m;

    // Determine the value of n based on m using an if-else chain
    if (m > 0) {
        cout << "The value of n = 1" << endl;
    } else if (m == 0) {
        cout << "The value of n = 0" << endl;
    } else {
        cout << "The value of n = -1" << endl;
    }

    return 0;
}
