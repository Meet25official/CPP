// 5. Create a file management system in C++ that allows users to create, read, update, and delete text files.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileManager {
private:
    string filename;
public:
    FileManager(const string& filename) : filename(filename) {}

    void createFile() {
        ofstream file(filename);
        if (file.is_open()) {
            file << "";
            file.close();
            cout << "File created successfully." << endl;
        } else {
            cout << "Failed to create the file." << endl;
        }
    }

    void readFile() {
        ifstream file(filename);
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } else {
            cout << "Failed to open the file." << endl;
        }
    }

    void updateFile(const string& content) {
        ofstream file(filename);
        if (file.is_open()) {
            file << content;
            file.close();
            cout << "File updated successfully." << endl;
        } else {
            cout << "Failed to update the file." << endl;
        }
    }

    void deleteFile() {
        if (remove(filename.c_str()) == 0) {
            cout << "File deleted successfully." << endl;
        } else {
            cout << "Failed to delete the file." << endl;
        }
    }
};

int main() {
    FileManager manager("example.txt");

    int choice;
    string content;
    while (true) {
        cout << "File Management System" << endl;
        cout << "1. Create file" << endl;
        cout << "2. Read file" << endl;
        cout << "3. Update file" << endl;
        cout << "4. Delete file" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                manager.createFile();
                break;
            case 2:
                manager.readFile();
                break;
            case 3:
                cout << "Enter the new content: ";
                cin.ignore();
                getline(cin, content);
                manager.updateFile(content);
                break;
            case 4:
                manager.deleteFile();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
