#include <iostream>
using namespace std;

class Rectangle {
private:
  double length;
  double width;

public:
  // Method to input rectangle dimensions
  void inputDimensions() {
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;
  }

  // Method to calculate and return the area
  double calculateArea() {
    return length * width;
  }

  // Method to display rectangle details
  void displayDetails() {
    cout << "\nLength: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << calculateArea() << endl;
  }
};

int main() {
  Rectangle rect;

  // Input rectangle dimensions
  rect.inputDimensions();

  // Display rectangle details
  cout << "\nRectangle Details:\n";
  rect.displayDetails();

  return 0;
}
