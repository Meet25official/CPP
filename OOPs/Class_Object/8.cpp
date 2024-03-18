#include<iostream>
using namespace std;

class Employees{
     int emp_id;
     string name;
     float salary;

      public:
      void scan(){
        cout << "\nEnter the employees id:- ";
        cin >> emp_id;

        cout << "\nEnter the name of employees:-  ";
        cin.ignore();
        getline(cin,name);

        cout << "\nEnter the salary of the employees:-  ";
        cin >> salary;
     }
    
     void display(){
        cout << "\nEmployee's Id= " << emp_id;
        cout << "\nEmployee's name= " << name;
        cout << "\nEmployee's salary= " << salary;
     } 
     void bonus(){
         float bonus = salary * 5 / 100;
         float new_salary  = salary + bonus;
         cout << "\nThe new salary of the employees is :-  " << new_salary;
     }  
};

int main(){
    Employees e;
    e.scan();
    e.display();
    e.bonus();
}
 