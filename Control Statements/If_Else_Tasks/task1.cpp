#include <iostream>

using namespace std;

int main() {
  // Declare variables
  int num1, num2;

  // Display a message for user input
  cout << "Enter two integers to compare: \n";

  // Read input from user
  cin >> num1 >> num2;

  // Check if the numbers are equal
  if (num1 == num2) {
    cout << "Number1 and Number2 are equal." << endl;
  } else {
    cout << "Number1 and Number2 are not equal." << endl;
  }

  return 0;
}
