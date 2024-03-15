#include <iostream>
#define PI 3.14159 // Define PI as a constant

using namespace std;

int main() {
  // Declare variables
  double radius, area, circumference;

  // Display a message for user input
  cout << "Find the area and circumference of any circle :\n";
  cout << "----------------------------------------------------\n";
  cout << "Input the radius(1/2 of diameter) of a circle : ";

  // Read input from user
  cin >> radius;

  // Calculate area and circumference using PI
  area = PI * radius * radius;
  circumference = 2 * PI * radius;

  // Display the calculated area and circumference
  cout << "The area of the circle is : " << area << endl;
  cout << "The circumference of the circle is : " << circumference << endl;

  return 0;
}
