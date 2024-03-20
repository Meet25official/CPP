#include <iostream>
#include <string>

class BankAccount {
private:
    int accountNumber;
    double balance;
    std::string accountHolderName;

public:
    // Constructor with initial values
    BankAccount(int accNumber, double initialBalance, const std::string& accHolderName)
        : accountNumber(accNumber), balance(initialBalance), accountHolderName(accHolderName) {}

    // Method to display account information
    void displayAccountInfo() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder Name: " << accountHolderName << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit of $" << amount << " successful." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful." << std::endl;
        } else {
            std::cout << "Insufficient funds or invalid withdrawal amount." << std::endl;
        }
    }
};

int main() {
    // Creating a bank account object
    BankAccount account1(123456, 1000.0, "John Doe");

    // Displaying account information
    std::cout << "Account Information:" << std::endl;
    account1.displayAccountInfo();

    // Performing deposit and withdrawal
    account1.deposit(500.0);
    account1.withdraw(200.0);

    // Displaying updated account information
    std::cout << "\nUpdated Account Information:" << std::endl;
    account1.displayAccountInfo();

    return 0;
}
