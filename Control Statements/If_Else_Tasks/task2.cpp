#include <iostream>

using namespace std;

int main() {
  // Declare variable
  int number;

  // Display a message for user input
  cout << "Enter an integer: ";

  // Read input from user
  cin >> number;

  // Check if the number is even using the modulo operator (%)
  if (number % 2 == 0) {
    cout << number << " is an even integer." << endl;
  } else {
    cout << number << " is an odd integer." << endl;
  }

  return 0;
}
