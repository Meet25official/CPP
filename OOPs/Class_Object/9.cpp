#include<iostream>
using namespace std;

class Bank {
    int account_no;
    string name;
    float balance;

    public:
    void scan(){
        cout << "\nEnter the account number:-  " ;
        cin >> account_no;
        cout << "\nEnter the holder's name:-  ";
        cin >> name;
        cout << "\nEnter the bank balance:-  ";
        cin >> balance;
    }

    void display(){
        cout << "\n\n";
        cout << "\nAccount number = " << account_no;
        cout << "\nName = " << name;
        cout << "\nBank Balance = " << balance;
        cout << "\n\n";
    }
    void dw(){
        float w,d;
        cout << "\nEnter the money if you want to withdraw:- ";
        cin >> w;
        if(w>balance){
            cout << "\nYour balaance is less than your widthdraw amount.";
            w=0;
        }
        cout << "\nEnter the money if you want to deposit:- ";
        cin >> d;
        balance = balance - w + d;
        cout << "\n\n\nThe new bank balance is :- " << balance;
    }
};

int main(){
    Bank b;
    b.scan();
    b.display();
    b.dw();
}