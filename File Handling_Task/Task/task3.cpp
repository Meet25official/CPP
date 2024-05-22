// 3. Develop a C++ application that copies the contents of one text file into another.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string inputFile, outputFile;
    ifstream inFile;
    ofstream outFile;

    cout << "Enter the name of the input file: ";
    cin >> inputFile;

    inFile.open(inputFile);
    if (inFile.fail()) {
        cerr << "Unable to open input file" << endl;
        return 1;
    }

    cout << "Enter the name of the output file: ";
    cin >> outputFile;

    outFile.open(outputFile);
    if (outFile.fail()) {
        cerr << "Unable to open output file" << endl;
        inFile.close();
        return 1;
    }

    char c;
    while (inFile.get(c)) {
        outFile << c;
    }
    inFile.close();
    outFile.close();
    cout << "File copied successfully." << endl;
    return 0;
}

