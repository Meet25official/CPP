#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float x, sum = 1, term;
    int n, i;

    cout << "Enter value of x and n: ";
    cin >> x >> n;

    for (i = 1; i <= n; i++) {
        term = pow(x, i);
        sum += term;
    }

    cout << "Sum is " << sum << endl;

    return 0;
}