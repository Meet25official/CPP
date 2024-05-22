// 1. Create a C++ program that reads a text file and counts the number of words in it.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileWordCounter {
public:
    int countWords(const string& filename) {
        ifstream file(filename);
        string word;
        int wordCount = 0;
        if (file.is_open()) {
            while (file >> word) {
                wordCount++;
            }
            file.close();
        } else {
            cout << "Failed to open the file." << endl;
            return -1; 
        }
        return wordCount;
    }
};
int main() {
    FileWordCounter counter;
    int wordCount = counter.countWords("filename.txt");
    if (wordCount >= 0) {
        cout << "Number of words in the said file: " << wordCount << endl;
    }
    return 0;
}