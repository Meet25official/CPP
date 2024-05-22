// 3. "Design a 'Bank' class to represent a bank's financials. Use a static member variable 'totalAssets' to keep track of the sum of all customer account balances, and update it automatically every time a new account is created or an existing account balance changes."

#include<iostream>
using namespace std;

class Bank{
    private:
    static double totalAssets;
    public:
    static double getTotalAssets(){
        return totalAssets;
    }
    void displyaBank(){
        cout << "Total Assets: " << totalAssets << endl;
    }
};
double Bank::totalAssets = 100000.0; 
int main(){
    Bank bank1, bank2, bank3;
    bank1.displyaBank();
    cout << "Total Assets: " << Bank::getTotalAssets() << endl;
    return 0;
}