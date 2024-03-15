#include <iostream>

using namespace std;

int main() {
   int age;

   cout << "Enter your age: ";
   cin >> age;

   if (age >= 18) {
       cout << "Congratulations! You are eligible for casting your vote.\n";
   } else {
       cout << "We are sorry, but you are not eligible to cast your vote yet.\n";
   }

   return 0;
}