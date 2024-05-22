#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    
    BankAccount(const string& accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << " into account " << accountNumber << ". New balance: $" << balance << endl;
    }

    void deposit(double amount, const string& checkNumber) {
        balance += amount;
        cout << "Deposited $" << amount << " (Check #" << checkNumber << ") into account " << accountNumber << ". New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from account " << accountNumber << ". New balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds in account " << accountNumber << ". Cannot withdraw $" << amount << endl;
        }
    }
    
    void transfer(double amount, const string& targetAccount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Transferred $" << amount << " from account " << accountNumber << " to account " << targetAccount << ". New balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds in account " << accountNumber << ". Cannot transfer $" << amount << " to " << targetAccount << endl;
        }
    }
};

int main() {
    
    BankAccount myAccount("123456", 1000.0);

    myAccount.deposit(200.0);
    myAccount.deposit(150.0, "789");
    myAccount.withdraw(300.0);
    myAccount.transfer(400.0, "987654");

    return 0;
}
