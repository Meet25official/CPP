// 6. Develop a program that extracts all email addresses from a given text file.

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

bool isValidCharacter(char c) {
    // Checks if the character is valid in an email address (alphanumeric or certain symbols)
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9') || c == '.' || c == '-' || c == '_' || c == '@';
}

bool isValidEmail(const char *start, const char *end) {
    // Validate the basic structure of the email address
    const char *at = strchr(start, '@');
    if (at == nullptr || at >= end || at == start) {
        return false;
    }
    const char *dot = strrchr(at, '.');
    if (dot == nullptr || dot <= at || dot == end - 1) {
        return false;
    }
    return true;
}

int main() {
    ifstream file("input.txt");
    if (!file.is_open()) {
        cerr << "Unable to open file\n";
        return 1;
    }

    const int BUFFER_SIZE = 4096;
    char buffer[BUFFER_SIZE];
    while (file.read(buffer, BUFFER_SIZE) || file.gcount() > 0) {
        int length = file.gcount();
        for (int i = 0; i < length; ++i) {
            if (buffer[i] == '@') {
                // Look for start of the email address
                int start = i - 1;
                while (start >= 0 && isValidCharacter(buffer[start]) && buffer[start] != '@') {
                    start--;
                }
                start++;

                // Look for end of the email address
                int end = i + 1;
                while (end < length && isValidCharacter(buffer[end])) {
                    end++;
                }

                if (isValidEmail(&buffer[start], &buffer[end])) {
                    cout.write(&buffer[start], end - start);
                    cout << '\n';
                }
            }
        }
    }

    file.close();
    return 0;
}