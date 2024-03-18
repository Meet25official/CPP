#include<iostream>
using namespace std;

class Student{
    string name;
    int Roll_No;
    int m1 , m2 , m3;

    public: 
    void scan(){
        cout << "\nEnter the student name:- ";
        getline(cin,name);
        cout << "\nEnter the roll no:-  ";
        cin >> Roll_No;
        cout << "\nEnter the three subjects marks:-  ";
        cin >> m1 >> m2 >> m3;
    }
    
    void average(){
        float avg = (m1+m2+m3)/3;
        cout << "\nThe average marks of three subjects is =  " << avg;
    }
    void change(){
        cout << "\nIf you change any subject marks then rewrite all three subjects marks for sequence:- ";
        cout << "\nEnter the three subjects marks:-  ";
        cin >> m1 >> m2 >> m3;
    }
    void display(){
        cout << "\nName = " << name;
        cout << "\nRoll No =  " << Roll_No;
        cout << "\nm1 = " << m1 << "\nm2 = " << m2 << "\nm3 = " << m3;
    }
};

int main(){
    Student s;
    s.scan();
    s.average();
    s.change();
    s.display();
    return 0;
}
