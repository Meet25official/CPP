#include <iostream>

using namespace std;

int main() {
  // Declare variables
  float fahrenheit, celsius;

  // Display a message for user input
  cout << "Convert temperature in Fahrenheit to Celsius :\n";
  cout << "---------------------------------------------------\n";
  cout << "Input the temperature in Fahrenheit : ";

  // Read input from user
  cin >> fahrenheit;

  // Perform conversion using the formula: Celsius = (Fahrenheit - 32) * 5/9
  celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

  // Display both Fahrenheit and Celsius temperatures
  cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
  cout << "The temperature in Celsius : " << celsius << endl;

  return 0;
}
