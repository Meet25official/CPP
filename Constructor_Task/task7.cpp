// 7. Implement a class for a bank transaction with member variables for transaction ID, amount, and transaction type. Write a constructor that initializes these variables.


#include<iostream>
using namespace std;

class BankTransaction{
    private:
    int transactionID;
    double amount;
    char transactionType;

    public:
    BankTransaction(int id, double amt, char type){
        transactionID = id;
        amount = amt;
        transactionType = type;
    }
    void displayTransaction(){
        cout << "Transaction ID: " << transactionID << endl;
        cout << "Amount: $" << amount << endl;
        cout << "Transaction Type: ";
        if(transactionType == 'D'){
            cout << "Deposit" << endl;
        }
        else if(transactionType == 'W'){
            cout << "Withdrawal" << endl;
        }
        else{
            cout << "Invalid Transaction Type" << endl;
        }
    }
};
int main(){
    BankTransaction transaction1(1, 100.0, 'D');
    BankTransaction transaction2(2, 50.0, 'W');

    transaction1.displayTransaction();
    transaction2.displayTransaction();

    return 0;
}