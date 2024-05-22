// 3. Design a class to model a bank account with member variables for account number, balance, and account holder name. Write a constructor that takes initial values for these variables.

#include<iostream>
using namespace std;

class BankAccount{
    private:
    int accNumber;
    double balance;
    string accHolderName;

    public:
    BankAccount(int accNum, double bal, string accHolder){  
        accNumber = accNum;
        balance = bal;
        accHolderName = accHolder;
    }
    void displayAccountInfo(){
        cout << "Account Number: " << accNumber << endl;
        cout << "Account Holder Name: " << accHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};
int main(){
    BankAccount account1(12345, 1000.0, "Tom");
    account1.displayAccountInfo();
    return 0;
}