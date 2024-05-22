#include <iostream>
#include <string>
using namespace std;

class Library {
public:

    void borrowBook(const string& bookTitle) {
        cout << "Book '" << bookTitle << "' borrowed successfully." << endl;
    }

    void borrowJournal(const string& journalTitle, int issueNumber) {
        cout << "Journal '" << journalTitle << "' (Issue " << issueNumber << ") borrowed successfully." << endl;
    }

    void borrowDVD(const string& dvdTitle, const string& borrowerName) {
        cout << "DVD '" << dvdTitle << "' borrowed by " << borrowerName << "." << endl;
    }

    void returnItem(const string& itemTitle) {
        cout << "Item '" << itemTitle << "' returned successfully." << endl;
    }

    void renewItem(const string& itemTitle) {
        cout << "Item '" << itemTitle << "' renewed successfully." << endl;
    }
};

int main() {
    Library myLibrary;

    myLibrary.borrowBook("Introduction to Algorithms"); 
    myLibrary.borrowJournal("Scientific American", 123);
    myLibrary.borrowDVD("Inception", "John Doe"); 

    myLibrary.returnItem("Introduction to Algorithms"); 
    myLibrary.renewItem("Scientific American"); 

    return 0;
}
