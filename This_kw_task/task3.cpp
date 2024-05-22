// 3. "Develop a class 'BankCustomer' to represent a customer's account in a bank. Each customer has a name, account number, and current balance. Write a member function 'withdraw(double amount)' that takes an amount to be withdrawn and uses the 'this' pointer to deduct the specified amount from the customer's balance."

#include<iostream>
using namespace std;

class BankCustomer{
    private:
    string name;
    int accountNumber;
    double balance;
    public:
    BankCustomer(string n, int accNum, double bal){
        name = n;
        accountNumber = accNum;
        balance = bal;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
        }
        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                this->balance -= amount;
                cout << "Withdrawal Successful. New Balance: " << balance << endl;
                }
                else if(amount <= 0){
                    cout << "Invalid withdrawal amount." << endl;
                    }
                    else{
                        cout << "Insufficient balance." << endl;
                        }
                        }
};
int main(){
    BankCustomer customer1("John Doe", 123456, 10000.0);
    customer1.display();
    customer1.withdraw(500.0);
    customer1.display();
    return 0;
}