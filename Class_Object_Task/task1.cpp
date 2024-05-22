// 1. Create a class named "Employee" with data members for employee ID, name, and salary. Include a method to input employee details and another method to display those details.

#include<iostream>
using namespace std;

class Employee{
    int employee_ID;
    string name;
    double salary;

public:
    void inputDetails(){
        cout << "Enter the Employee_ID: ";
        cin >> employee_ID;

        cout << "Enter the Employee_Name: ";
        cin >> name;

        cout << "Enter the Employee_Salary: ";
        cin >> salary;
    }

    void displayDetails(){
        cout << "Employee_ID: " << employee_ID << endl;
        cout << "Employee_Name: " << name << endl;
        cout << "Employee_Salary: " << salary << endl;
    }
};


int main(){

    Employee emp1;

    emp1.inputDetails();
    cout << "Enter the Employee Details." <<endl;

    emp1.displayDetails();

    return 0;
}