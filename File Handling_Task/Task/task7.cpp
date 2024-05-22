// 7. Write a C++ program that merges two sorted text files into a single sorted file.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class merges{
    public:
    void mergeFiles(string file1, string file2, string outputFile){
        ifstream f1(file1.c_str());
        ifstream f2(file2.c_str());
        ofstream fo(outputFile.c_str());

        string line1, line2;
        getline(f1, line1);
        getline(f2, line2);

        while (!f1.eof() &&!f2.eof()) {
            if (line1 < line2) {
                fo << line1 << endl;
                getline(f1, line1);
            } else {
                fo << line2 << endl;
                getline(f2, line2);
            }
        }
        while (!f1.eof()) {
            fo << line1 << endl;
            getline(f1, line1);
        }
        while (!f2.eof()) {
            fo << line2 << endl;
            getline(f2, line2);
        }

        f1.close();
        f2.close();
        fo.close();
    }
};
int main() {
    merges m;
    m.mergeFiles("file1.txt", "file2.txt", "output.txt");
    return 0;
}