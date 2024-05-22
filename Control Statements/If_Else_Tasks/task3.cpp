#include <iostream>

using namespace std;

int main() {
  // Declare variable
  int number;

  // Display a message for user input
  cout << "Enter an integer: ";

  // Read input from user
  cin >> number;

  // Check if the number is positive (greater than 0) or negative (less than 0)
  if (number > 0) {
    cout << number << " is a positive number." << endl;
  } else if (number < 0) {
    cout << number << " is a negative number." << endl;
  } else {
    cout << number << " is zero." << endl;
  }

  return 0;
}
