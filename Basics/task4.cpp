#include <iostream>

using namespace std;

int main() {
  // Declare variables
  int num;

  // Display a message for user input
  cout << "Print the multiplication table of a number upto 10:\n";
  cout << "--------------------------------------------------------\n";
  cout << "Input a number: ";

  // Read input from user
  cin >> num;

  // Loop to print the multiplication table from 1 to 10
  for (int i = 1; i <= 10; ++i) {
    cout << num << " x " << i << " = " << num * i << endl;
  }

  return 0;
}
