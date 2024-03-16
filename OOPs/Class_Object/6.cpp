#include<iostream>

using namespace std;

class Student {
private:
  int rollno;
  string name;
  int mark;

public:
  // Method to input Student details
  void inputDetails() {
    cout << "Enter Roll NO. : ";
    cin >> rollno;

    cout << "Enter Student Name: ";
    cin.ignore();
    getline( cin , name); // Skip newline from previous input

    cout << "Enter Student Mark: ";
    cin >> mark;
  }

  // Method to display employee details
  void displayDetails() {
    cout << "\nStudent Roll No. : " << rollno << endl;
    cout << "Student Name : " << name << endl;
    cout << "Student mark : " << mark << endl;
  }
};

int main() {
  Student stu1;

  // Input employee details
  stu1.inputDetails();

  // Display employee details
  cout << "\nStudent Details:\n";
  stu1.displayDetails();

  return 0;
}
