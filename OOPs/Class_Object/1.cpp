#include <iostream>
using namespace std;

class Employee {
private:
  int employeeId;
  string name;
  double salary;

public:
  // Method to input employee details
  void inputDetails() {
    cout << "Enter Employee ID: ";
    cin >> employeeId;

    cout << "Enter Employee Name: ";
    getline(cin >> ws, name); // Skip newline from previous input

    cout << "Enter Employee Salary: ";
    cin >> salary;
  }

  // Method to display employee details
  void displayDetails() {
    cout << "\nEmployee ID: " << employeeId << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Employee Salary: " << salary << endl;
  }
};

int main() {
  Employee emp1;

  // Input employee details
  emp1.inputDetails();

  // Display employee details
  cout << "\nEmployee Details:\n";
  emp1.displayDetails();

  return 0;
}
