#include <iostream>
#include <string>

using namespace std;

class StringManipulation {
public:
    string reverseString(const string& str) {
        string reversedStr;
        for (int i = str.length() - 1; i >= 0; --i) {
            reversedStr.push_back(str[i]);
        }
        return reversedStr;
    }

    bool isPalindrome(const string& str) {
        int left = 0;
        int right = str.length() - 1;
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    int countChar(const string& str, char c) {
        int count = 0;
        for (char ch : str) {
            if (ch == c) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    StringManipulation stringManipulation;

    string str = "Hello World";
    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << stringManipulation.reverseString(str) << endl;

    str = "racecar";
    cout << "Original String: " << str << endl;
    if (stringManipulation.isPalindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    char c = 'l';
    str = "Hello World";
    cout << "Occurrence of " << c << " in " << str << ": " << stringManipulation.countChar(str, c) << endl;

    return 0;
}
