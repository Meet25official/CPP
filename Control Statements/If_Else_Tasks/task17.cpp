#include <iostream>

using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Check if alphabet (uppercase or lowercase)
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "This is an alphabet." << endl;
    } else if (ch >= '0' && ch <= '9') { 
        cout << "This is a digit." << endl;
    } else {
        cout << "This is a special character." << endl;
    }

    return 0;
}
