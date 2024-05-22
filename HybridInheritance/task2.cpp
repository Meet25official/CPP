// 2. Employee Hierarchy:
//    Design a system to represent employees in an organization. Employees can be categorized based on their role (e.g., manager, worker) and their specialization (e.g., IT, finance). Utilize hybrid inheritance to model this hierarchy.

#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    Employee(string _name, int _id) : name(_name), id(_id) {}
    virtual void display() = 0; 
};

class Role {
protected:
    string role;
public:
    Role(string _role) : role(_role) {}
    virtual void displayRole() = 0; 
};

class Manager : public Employee {
public:
    Manager(string _name, int _id) : Employee(_name, _id) {}
    void display() override {
        cout << "Employee Name: " << name << endl;
    }
};

class ITManager : public Manager, public Role {
public:
    ITManager(string _name, int _id) : Manager(_name, _id), Role("IT") {}
    void displayRole() override {
        cout << "Role: " << role << endl;
    }
};

int main() {
    ITManager itManager("John Doe", 1001);
    itManager.display();
    itManager.displayRole();
    
    return 0;
}

