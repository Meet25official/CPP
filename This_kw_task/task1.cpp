// 1. "Create a class 'Employee' to represent an employee in a company. Each employee has a unique ID and salary. Implement a member function 'compareSalary(Employee* other)' that takes another employee object as a parameter and uses the 'this' pointer to compare the salary of the current employee with the other employee."

#include<iostream>
using namespace std;
class Employee{
    private:
    int id;
    double salary;
    public:
    Employee(int i,double s){
        id=i;
        salary=s;
    }
    void compareSalary(Employee* other){
        if(this->salary>other->salary){
            cout<<"The current employee has a higher salary."<<endl;
        }
        else if(this->salary<other->salary){
            cout<<"The other employee has a higher salary."<<endl;
        }
        else{
            cout<<"Both employees have the same salary."<<endl;
        }
    }
};
int main(){
    Employee e1(1,5000.0);
    Employee e2(2,6000.0);
    e1.compareSalary(&e2);
    return 0;
}