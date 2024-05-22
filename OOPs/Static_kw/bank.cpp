#include<iostream>
using namespace std;

class Bank {
    private:
        int bno;
        string name;
        float balances;
    public:
        void scan(){
            cout << "enter the bank number: "<< endl;
            cin >> bno;

            cout << "enter the name: " << endl;
            cin >> name;

            cout << "enter the balances: " << endl;
            cin >> balances;
        }

        void display(){
            cout << "\nbno" << bno;
            cout << "\nname" << name;
            cout << "\nbalances" << balances;
        }
        
};
int main(){
    Bank b;
    b.scan();
    b.display();
    return 0;
}
