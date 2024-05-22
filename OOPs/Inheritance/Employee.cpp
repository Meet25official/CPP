#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    Employee(string name, int id) : name(name), id(id) {}
     void display() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Manager : public Employee {
public:
    Manager(string name, int id) : Employee(name, id) {}
    void display() {
        cout << "Manager - ";
        Employee::display();
    }
};

class Engineer : public Employee {
public:
    Engineer(std::string name, int id) : Employee(name, id) {}
    void display()  {
        cout << "Engineer - ";
        Employee::display();
    }
};

class Clerk : public Employee {
public:
    Clerk(string name, int id) : Employee(name, id) {}
    void display() {
        cout << "Clerk - ";
        Employee::display();
    }
};

int main() {
    Manager manager("Meet", 101);
    Engineer engineer("A1", 102);
    Clerk clerk("A2", 103);

    manager.display();
    engineer.display();
    clerk.display();

    return 0;
}
