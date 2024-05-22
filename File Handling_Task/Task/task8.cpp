// 8. Develop a file comparison tool that compares two text files and identifies the differences between them.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool compareFiles(const string& file1, const string& file2) {
    ifstream f1(file1);
    ifstream f2(file2);

    if (!f1.is_open() ||!f2.is_open()) {
        cerr << "Error opening files." << endl;
        return false;
    }

    string line1, line2;

    while (getline(f1, line1)) {
        if (!getline(f2, line2) || line1!= line2) {
            return false;
        }
    }

    if (getline(f2, line2)) {
        return false;
    }

    return true;
}

int main(int argc, char* argv[]) {
    if (argc!= 3) {
        cerr << "Usage: " << argv[0] << " <file1> <file2>" << endl;
        return 1;
    }

    if (compareFiles(argv[1], argv[2])) {
        cout << "Files are identical." << endl;
    } else {
        cout << "Files are different." << endl;
    }

    return 0;
}