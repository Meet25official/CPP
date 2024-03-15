#include <iostream>
#include <cmath>

using namespace std;

double factorial(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

double sumSeries(int x, int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
        cout << factorial(i) << " ";
    }
    return sum;
}

int main() {
    int x, n;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "\nSum of factorials is " << sumSeries(x, n) << endl;
    return 0;
}