#include<iostream>
using namespace std;

// class F_biz{
// protected:
//     double balance;
// public:
//     F_biz (double balance): balance(balance){}
//      void deposit(double amount) {
//         balance += amount;
//     }
//      void withdraw(double amount) {
//         if (balance >= amount)
//             balance -= amount;
//         else
//             cout << "Insufficient funds!" << endl;
//     }
//      void displayBalance() const {
//         cout << "Balance: " << balance << endl;
//     }
// };
// class S_biz : public F_biz{
//     public:
//     S_biz(double balance) : F_biz(balance) {}
//     void deposit(double amount)  {
//         balance += amount;
//         balance += 0.05 * amount; 
//     }
// };
// int main(){
//     F_biz S_biz(1000);
//     S_biz.deposit(200);
//     S_biz.displayBalance();
//     return 0;
// }

///////////////////////////////////////////////////////////////////////

// class Vehicle{
// protected:
//     int wheels;
// public:
//     Vehicle(int wheels) : wheels(wheels) {}
//     void display() {
//         cout << "Number of wheels: " << wheels << endl;
//     }
// };

// class Car : public Vehicle {
// public:
//     Car() : Vehicle(4) {}
// };

// class Motorcycle : public Vehicle {
// public:
//     Motorcycle() : Vehicle(2) {}
// };

// int main() {
//     Car car;
//     Motorcycle motorcycle;
    
//     car.display();
//     motorcycle.display();

//     return 0;
// }

/////////////////////////////////////////////////////////////

// class G_father{
// protected:
//     string sarname;
// public:
//     G_father (string sarname): sarname(sarname){}
//     void display() {
//         cout << "sarname is: " << sarname << endl;
//     }
// };

// class Father : public G_father{
// public:
//     Father (string sarname): G_father(sarname){}
//     void display() {
//         cout << "sarname is: " << sarname << endl;
//     }
//     Father() : G_father("Sarvaiya"){}
// };

// class Sun : public Father{
// public:
//     Sun() : Father("Sarvaiya"){}
// };

// int main(){

//     Father father;
//     Sun sun;

//     father.display();
//     sun.display();

//     return 0;
// }