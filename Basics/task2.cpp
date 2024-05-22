#include <iostream>

using namespace std;

int main() {
  // Declare variables
  double kmph, mph;

  // Display a message for user input
  cout << "Convert kilometers per hour to miles per hour :\n";
  cout << "---------------------------------------------------\n";
  cout << "Input the distance in kilometers : ";

  // Read input from user
  cin >> kmph;

  // Perform conversion (1 kilometer = 0.621371 miles)
  mph = kmph * 0.621371;

  // Display both values with appropriate units
  cout << "The " << kmph << " Km./hr. means " << mph << " Miles/hr." << endl;

  return 0;
}
