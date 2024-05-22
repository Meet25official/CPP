#include <iostream>
using namespace std;

class MathUtility {
public:
    static int factorial(int n) {
        if (n == 0)
            return 1;
        else
            return n * factorial(n - 1);
    }
};

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << MathUtility::factorial(n) << endl;
    return 0;
}
