// 6. Develop a program that extracts all email addresses from a given text file.

#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

class EmailExtractor {
public:
    void extractEmails(const string& filename) {
        ifstream file(filename);
        string content((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
        regex email_regex("([a-zA-Z0-9_\\-\\.]+)@([a-zA-Z0-9_\\-\\.]+)\\.([a-zA-Z]{2,5})");
        smatch match;

        while (regex_search(content, match, email_regex)) {
            emails_.append(match.str());
            emails_.append("\n");
            content = match.suffix().str();
        }
    }

    void printEmails() {
        cout << emails_;
    }

private:
    string emails_;
};

int main() {
    EmailExtractor extractor;
    extractor.extractEmails("input.txt");
    extractor.printEmails();

    return 0;
}