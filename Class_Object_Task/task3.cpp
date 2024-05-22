// 3. Develop a class named "BankAccount" with properties for account number, account holder's name, and balance. Include methods to deposit, withdraw, and display account details.

#include<iostream>
using namespace std;

class BankAccount{
    double account_number;
    string account_holder_name;
    double balance;

public:
BankAccount(double acc_num, string acc_holder_name, double bal) : account_number(acc_num),account_holder_name(acc_holder_name),balance(bal){}

void diposit(double amount){
    if(amount > 0){
        balance += amount;
        cout << "Deposit Successful. Your new balance is: " << balance << endl; 
    }
    else{
        cout << "Invalid deposit amount. Please try again." << endl;
    }
}

void withdraw(double amount){
    if(amount > 0 && amount <= balance){
        balance -=amount;
        cout << "Withdrawal Successful. Your new balance is: " << balance << endl;
    }
    else {
        if(amount <= 0){
            cout << "Invalid withdrawal amount. Please try again." << endl;
        }
        else{
            cout << "Insufficient balance. Please try again." << endl;
        }
    }
}

void displayAccountDetails(){
    cout << "Account Number: " << account_number << endl;
    cout << "Account Holder's Name: " << account_holder_name << endl;
    cout << "Balance: " << balance << endl; 
}
};

int main(){

    BankAccount account1(12345, "abc", 1000.0);
    account1.displayAccountDetails();
    account1.diposit(500.0);
    account1.withdraw(200.0);
    return 0;
}