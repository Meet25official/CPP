#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number between 1 to 10: ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        case 4:
            cout << "Four" << endl;
            break;
        case 5:
            cout << "Five" << endl;
            break;
        case 6:
            cout << "Six" << endl;
            break;
        case 7:
            cout << "Seven" << endl;
            break;
        case 8:
            cout << "Eight" << endl;
            break;
        case 9:
            cout << "Nine" << endl;
            break;
        case 10:
            cout << "Ten" << endl;
            break;
        default:
            cout << "Out of range" << endl;
    }

    return 0;
}