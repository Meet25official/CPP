// Make a CPP program to scan numbers from the user until user enters -1. Then store all the odd numbers into odd.txt and even numbers into even.txt file
#include <iostream>
#include <fstream>
using namespace std;

class FileHandling{
    private:
    ofstream oddFile, evenFile;
    public:
    FileHandling(){
        oddFile.open("odd.txt");
        evenFile.open("even.txt");
    }
    void writeFile(){
        int num;
        cout << "Enter numbers (enter -1 to stop): ";
        while (true){
            cin >> num;
            if (num == -1){
                break;
            }
            if (num % 2 == 0){
                evenFile << num << endl;
            }
            else{
                oddFile << num << endl;
            }
        }
    }
    ~FileHandling(){
        oddFile.close();
        evenFile.close();
    }
};
int main(){
    FileHandling fileHandling;
    fileHandling.writeFile();
    return 0;
}