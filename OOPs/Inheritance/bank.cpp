#include <iostream>
using namespace std;

class Account {
protected:
    double balance;
public:
    Account(double balance) : balance(balance) {}
     void deposit(double amount) {
        balance += amount;
    }
     void withdraw(double amount) {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient funds!" << endl;
    }
     void displayBalance() const {
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
public:
    SavingsAccount(double balance) : Account(balance) {}
    void deposit(double amount)  {
        balance += amount;
        balance += 0.05 * amount; 
    }
};

class CheckingAccount : public Account {
public:
    CheckingAccount(double balance) : Account(balance) {}
};

class CreditAccount : public Account {
public:
    CreditAccount(double balance) : Account(balance) {}
    void withdraw(double amount)  {
        balance -= amount;
        balance -= 0.1 * amount; 
    }
};

int main() {
    SavingsAccount savings(1000);
    CheckingAccount checking(2000);
    CreditAccount credit(500);

    savings.deposit(200);
    savings.displayBalance();

    checking.withdraw(300);
    checking.displayBalance();

    credit.withdraw(100);
    credit.displayBalance();

    return 0;
}
