#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeId;
    double salary;
    string department;

public:
    
    Employee() {
        name = "";
        employeeId = 0;
        salary = 0.0;
        department = "";
    }

    Employee(const string& empName, int empId, double empSalary, const string& empDepartment) {
        name = empName;
        employeeId = empId;
        salary = empSalary;
        department = empDepartment;
    }

    void addEmployee(const string& empName, int empId, double empSalary, const string& empDepartment) {
        name = empName;
        employeeId = empId;
        salary = empSalary;
        department = empDepartment;
        cout << "New employee added: " << name << " (ID: " << employeeId << ")" << endl;
    }
    
    void displayEmployeeDetails() {
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << employeeId << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    
    Employee emp1;
    emp1.addEmployee("John Doe", 101, 60000.0, "Engineering");
    emp1.displayEmployeeDetails();

    Employee emp2("Alice Smith", 102, 55000.0, "Marketing");
    emp2.displayEmployeeDetails();

    return 0;
}
