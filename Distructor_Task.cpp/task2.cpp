// 2. Design a class to manage student records. Implement a destructor that displays a message when a student record object is destroyed.

#include<iostream>
using namespace std;

class StudentRecord{
    private:
    string name;
    int rollNo;
    
    public:
    StudentRecord(string n, int r){
        name = n;
        rollNo = r;
    }
    void displyStudentRecordInfo(){
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
    ~StudentRecord(){
        cout << "Destroying Student Record of " << name << endl;
    }
};
int main(){
    StudentRecord s1("John Doe", 101);
    s1.displyStudentRecordInfo();
    return 0;
}