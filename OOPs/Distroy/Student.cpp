#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    int Roll_No;
    string Department;
    public:
    Student(string n,int r,string d){
        name = n;
        Roll_No = r;
        Department = d;
        cout << "Constructer called...." << endl;
    }
    void display(){
        cout << "The name the student :- " << name << endl;
        cout << "The Roll no of the student :- " << Roll_No << endl;
        cout << "The Department of the student :- " << Department << endl;
    }
    ~Student(){
        cout << "Destructor called......" << endl;
        cout << "The details of this student name:- " << name << " , Roll No:- " << Roll_No << " and Department:- " << Department << " are destroyed.";
    }
};

int main(){
    Student s1("Meet s.",8,"IT");
    cout << endl << "The Students details before destruction:- " << endl;
    s1.display();
    
    return 0;
}