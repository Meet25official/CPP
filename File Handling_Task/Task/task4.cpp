// 4. Implement a program that reads a file containing a list of names and sorts them alphabetically.
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class NameSorter {
public:
    void sortNames(char names[][100], int n) {
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(strcmp(names[i], names[j]) > 0) {
                    char temp[100];
                    strcpy(temp, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], temp);
                }
            }
        }
    }
    void readNamesFromFile(const char* filename, char names[][100], int& n) {
        ifstream file(filename);
        if(file.fail()) {
            cout << "File not found";
            exit(1);
        }
        int i = 0;
        while(file.getline(names[i], 100)) {
            i++;
        }
        n = i;
    }
    void printNames(char names[][100], int n) {
        for(int i = 0; i < n; i++) {
            cout << names[i] << endl;
        }
    }
};
int main() {
    NameSorter sorter;
    char names[100][100];
    int n;
    sorter.readNamesFromFile("names.txt", names, n);
    sorter.sortNames(names, n);
    sorter.printNames(names, n);
    return 0;
}