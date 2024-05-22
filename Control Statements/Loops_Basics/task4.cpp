#include <iostream>
using namespace std;

bool isPalindrome(int number) {
    int reversed = 0;
    int original = number;

    // reverse the number
    while (number != 0) {
        int digit = number % 10;
        reversed = (reversed * 10) + digit;
        number /= 10;
    }

    // check if the original number is equal to its reverse
    return original == reversed;
}

int main() {
    int number;
    cout << "Please input a number: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << "This is a palindrome" << endl;
    } else {
        cout << "This is not a palindrome" << endl;
    }

    return 0;
}