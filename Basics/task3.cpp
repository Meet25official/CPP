#include <iostream>

using namespace std;

int main() {
  // Declare variables
  double kelvin, fahrenheit;

  // Display a message for user input
  cout << "Convert temperature in Kelvin to Fahrenheit :\n";
  cout << "---------------------------------------------------\n";
  cout << "Input the temperature in Kelvin : ";

  // Read input from user
  cin >> kelvin;

  // Perform conversion (Fahrenheit = (Kelvin - 273.15) * 9/5 + 32)
  fahrenheit = (kelvin - 273.15) * 9.0 / 5.0 + 32.0;

  // Display both values with appropriate units
  cout << "The temperature in Kelvin : " << kelvin << endl;
  cout << "The temperature in Fahrenheit : " << fahrenheit << endl;

  return 0;
}
