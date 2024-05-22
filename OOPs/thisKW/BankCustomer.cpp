#include <iostream>
using namespace std;

class BankCustomer
{
    public:
        string name;
        string accountNumber;
        double balance;
        BankCustomer(const string &name, const string &accountNumber, double balance) : name(name), accountNumber(accountNumber), balance(balance) {}
  
        void withdraw(double amount)
        {
            if (amount > 0 && amount <= this->balance)
            {
                this->balance -= amount;
                cout << "Withdrawn " << amount << " from account. Remaining balance: " << this->balance << endl;
            }
            else
            {
                cout << "Invalid withdrawal amount or insufficient balance." << endl;
            }
        }
};

int main()
{
    BankCustomer customer("Meet", "123456", 5000.0);    
    customer.withdraw(1000.0);

    return 0;
}
