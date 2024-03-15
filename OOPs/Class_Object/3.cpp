#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
  int accountNumber;
  string name;
  double balance;

public:
  // Constructor to initialize account details (optional)
  BankAccount(int accountNumber, const string& name, double initialBalance = 0.0)
      : accountNumber(accountNumber), name(name), balance(initialBalance) {}

  // Method to deposit money
  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      cout << "Deposit successful! New balance: $" << balance << endl;
    } else {
      cout << "Invalid deposit amount. Please enter a positive value." << endl;
    }
  }

  // Method to withdraw money
  void withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      cout << "Withdrawal successful! New balance: $" << balance << endl;
    } else {
      if (amount <= 0) {
        cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
      } else {
        cout << "Insufficient funds. Withdrawal declined." << endl;
      }
    }
  }

  // Method to display account details
  void displayDetails() {
    cout << "\nAccount Number: " << accountNumber << endl;
    cout << "Account Holder: " << name << endl;
    cout << "Balance: $" << balance << endl;
  }
};

int main() {
  int accountNum;
  std::string accountName;
  double initialBalance;

  // Get account details from user
  cout << "Enter account number: ";
  cin >> accountNum;

  cout << "Enter account holder name: ";
  getline(cin >> ws, accountName); // Skip newline from previous input

  cout << "Enter initial balance (optional, press Enter for 0.0): ";
  cin >> initialBalance;

  // Create a BankAccount object
  BankAccount account(accountNum, accountName, initialBalance);

  int choice;
  double amount;

  do {
    cout << "\nBank Account Menu:\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Display Account Details\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter amount to deposit: ";
        cin >> amount;
        account.deposit(amount);
        break;
      case 2:
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        account.withdraw(amount);
        break;
      case 3:
        account.displayDetails();
        break;
      case 4:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
    }
  } while (choice != 4);

  return 0;
}
