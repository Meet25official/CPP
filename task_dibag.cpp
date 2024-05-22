// Tasks:

// --> Multiple Division Operations:

//    - Scenario: Extend the code to perform multiple division operations based on user input. Prompt the user to enter the number of division operations they want to perform and then input pairs of 'x' and 'y' values for each operation. Handle division by zero errors and invalid input values gracefully using custom exceptions.

//    - Objective: Modify the code to allow multiple division operations and handle exceptions for each operation individually.

//    - Tasks:
//      - Prompt the user to enter the number of division operations they want to perform.
//      - For each operation, allow the user to input 'x' and 'y' values.
//      - Implement error checking to ensure that 'y' is not zero and that both 'x' and 'y' are valid integers for each operation.
//      - Use exception handling to catch and handle division by zero errors and input-related errors for each operation separately.
//      - Display informative messages for each exception, indicating which operation caused the error.

// These scenarios introduce different use cases and challenges for the code, such as integrating file operations and handling multiple division operations with user input, while still focusing on exception handling and error reporting.

// #include<iostream>
// #include<stdexcept>

// using namespace std;

// class DivisionException : public runtime_error {
// public:
//     DivisionException(string msg) : runtime_error(msg) {}
// };

// int main() {
//     int numOperations;
//     cout << "Enter the number of division operations: ";
//     cin >> numOperations;

//     for (int i = 1; i <= numOperations; ++i) {
//         int x, y;
//         cout << "Enter x and y for operation " << i << ": ";
//         cin >> x >> y;

//         try {
//             if (y == 0) {
//                 throw DivisionException("Division by zero " + i);
//             }

//             if (cin.fail()) {
//                 throw invalid_argument("Invalid input");
//             }

//             double result = (x) / y;
//             cout << "Result of operation " << i << ": " << result << endl;
//         } catch (const DivisionException& e) {
//             cout << "Error: " << e.what() << endl;
//         } catch (const invalid_argument& e) {
//             cout << "Error: " << e.what() << " in operation " << i << endl;
//         }
//     }

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// --> Create a C++ program that simulates a simple banking system. Implement a custom exception class called "InsufficientFundsException" to handle cases where a user tries to withdraw more money from their account than their balance allows. The program should include the following functionality:

// 1. Create a class named "BankAccount" with the following attributes:
//    - Account number
//    - Account holder's name
//    - Account balance

// 2. Implement a constructor for the "BankAccount" class to initialize the account details.

// 3. Create a member function "withdraw" that allows the user to withdraw a specified amount of money from their account. If the withdrawal amount is greater than the account balance, throw an "InsufficientFundsException" custom exception.

// 4. Create a member function "display" that displays the account details, including the account number, account holder's name, and account balance.

// 5. In the main program, create two instances of the "BankAccount" class and demonstrate the following actions:
//    - Initialize the accounts with initial balances.
//    - Attempt to withdraw an amount from each account, catching and handling any "InsufficientFundsException" exceptions that may occur.
//    - Display the account details after each withdrawal attempt.

// Ensure that the custom exception class "InsufficientFundsException" is properly defined and thrown when necessary.

// #include <iostream>
// #include<stdexcept>
// #include <string>
// using namespace std;

// class InsufficientFundsException : public exception
// {
// public:
//     virtual const char *what() const throw()
//     {
//         return "Insufficient funds to perform the withdrawal.";
//     }
// };

// class BankAccount
// {
// private:
//     int accountNumber;
//     string accountHolderName;
//     double balance;

// public:
//     BankAccount(int number, string name, double initialBalance) : accountNumber(number), accountHolderName(name), balance(initialBalance) {}

//     void withdraw(double amount)
//     {
//         if (amount > balance)
//         {
//             throw InsufficientFundsException();
//         }
//         else
//         {
//             balance -= amount;
//             cout << "Withdrawal of $" << amount << " successful." << endl;
//         }
//     }

//     void display()
//     {
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Account Holder Name: " << accountHolderName << endl;
//         cout << "Account Balance: $" << balance << endl;
//     }
// };

// int main()
// {

//     BankAccount account1(12345, "ABC", 1000.0);
//     BankAccount account2(10024, "XYZ", 500.0);

//     try
//     {
//         cout << "Account 1 Details:" << endl;
//         account1.display();
//         cout << endl;
//         cout << "Attempting to withdraw $200 from Account 1..." << endl;
//         account1.withdraw(200.0);
//         account1.display();
//     }
//     catch (InsufficientFundsException &e)
//     {
//         cout << "Error: " << e.what() << endl;
//     }

//     cout << endl;

//     try
//     {
//         cout << "Account 2 Details:" << endl;
//         account2.display();
//         cout << endl;
//         cout << "Attempting to withdraw $900 from Account 2..." << endl;
//         account2.withdraw(900.0);
//         account2.display();
//     }
//     catch (InsufficientFundsException &e)
//     {
//         cout << "Error: " << e.what() << endl;
//     }

//     return 0;
// }
