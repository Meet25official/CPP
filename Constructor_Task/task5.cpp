// 5. Create a class representing a student with member variables for name, roll number, and age. Write a constructor that accepts these details as parameters during object creation.

#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNumber;
    int age;

    public:
    // Constructor
    Student(string n, int r, int a){
        name = n;
        rollNumber = r;
        age = a;
    }
    void displayStudentInfo(){
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
    }
};
int main(){
    Student student1("abc", 101, 20);
    Student student2("xyz", 102, 21);
    student1.displayStudentInfo();
    student2.displayStudentInfo();
    return 0;
}