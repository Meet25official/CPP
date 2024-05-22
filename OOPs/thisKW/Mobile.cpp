#include<iostream>
using namespace std;

class MobilePhone {
private:
    string phoneNumber;
    string *contactNames;
    string *contactNumbers;
    int maxSize;
    int currentSize;

public:
    MobilePhone(string number, int maxContacts) : phoneNumber(number), maxSize(maxContacts), currentSize(0) {
        contactNames = new string[maxSize];
        contactNumbers = new string[maxSize];
    }

    ~MobilePhone() {
        delete[] contactNames;
        delete[] contactNumbers;
    }

    void addContact(string name, string number) {
        if(currentSize < maxSize) {
            contactNames[currentSize] = name;
            contactNumbers[currentSize] = number;
            currentSize++;
        } else {
            cout << "Contact list is full." << endl;
        }
    }

    string getPhoneNumber() {
        return phoneNumber;
    }

    void displayContactList() {
        cout << "Contact List: " << endl;
        for(int i=0; i<currentSize; i++) {
            cout << contactNames[i] << " : " << contactNumbers[i] << endl;
        }
    }
};


int main() {
    MobilePhone myPhone("1234567890", 5);

    myPhone.addContact("Meet", "9875648512");
    myPhone.addContact("Himesh", "9498765421");

    cout << "Phone Number: " << myPhone.getPhoneNumber() << endl;
    myPhone.displayContactList();


    return 0;
}