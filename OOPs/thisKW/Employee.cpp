#include <iostream>
using namespace std;

class Employee {
public:
    Employee(int id, double salary) : id(id), salary(salary) {}

    int id;
    double salary;

    int compareSalary(Employee* other) {
        
        if (this->salary > other->salary) {
            return 1;
        } else if (this->salary < other->salary) {
            return -1;
        } else {
            return 0; 
        }
    }
};

int main() {
    Employee employee1(1, 50000);
    Employee employee2(2, 60000);

    int result = employee1.compareSalary(&employee2);
    if (result == 1) {
        cout << "Employee 1 has a higher salary than Employee 2." << endl;
    } else if (result == -1) {
        cout << "Employee 1 has a lower salary than Employee 2." << endl;
    } else {
        cout << "Employee 1 has the same salary as Employee 2." << endl;
    }

    return 0;
}