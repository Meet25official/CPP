#include <iostream>
#include <string>

class BankTransaction {
private:
    int transactionID;
    double amount;
    std::string transactionType;

public:
    // Constructor with parameters
    BankTransaction(int transID, double transAmount, const std::string& transType)
        : transactionID(transID), amount(transAmount), transactionType(transType) {}

    // Method to display transaction information
    void displayTransaction() {
        std::cout << "Transaction ID: " << transactionID << std::endl;
        std::cout << "Amount: $" << amount << std::endl;
        std::cout << "Transaction Type: " << transactionType << std::endl;
    }
};

int main() {
    // Creating a bank transaction object
    BankTransaction transaction1(123456, 100.0, "Deposit");

    // Displaying transaction information
    std::cout << "Transaction Information:" << std::endl;
    transaction1.displayTransaction();

    return 0;
}
