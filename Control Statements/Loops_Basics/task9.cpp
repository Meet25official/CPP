#include <iostream>

using namespace std;

int main() {
    int n, i = 1, sign = 1, sum = 0;
    cout << "Enter one value : ";
    cin >> n;

    while (i <= n) {
        sum += sign * i;
        cout << i;
        if (i != n) {
            cout << (sign == 1 ? " + " : " - ");
        }
        i += 2;
        sign *= -1;
    }

    cout << "\nSum of series is " << sum << ".\n";
    return 0;
}