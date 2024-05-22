#include <iostream>
#include <iomanip>

using namespace std;

void calculateDivision(double percentage) {
    if (percentage >= 90) {
        cout << "Division = First" << endl;
    } else if (percentage >= 80) {
        cout << "Division = Second" << endl;
    } else if (percentage >= 70) {
        cout << "Division = Third" << endl;
    } else if (percentage >= 60) {
        cout << "Division = Fourth" << endl;
    } else {
        cout << "Division = Failed" << endl;
    }
}

int main() {
    int rollNo;
    string name;
    int marksPhysics, marksChemistry, marksComputerApplication;
    double totalMarks, percentage;

    cout << "Input the Roll Number of the student :";
    cin >> rollNo;
    cout << "Input the Name of the Student :";
    cin.ignore();
    getline(cin, name);
    cout << "Input the marks of Physics, Chemistry and Computer Application : ";
    cin >> marksPhysics >> marksChemistry >> marksComputerApplication;

    totalMarks = marksPhysics + marksChemistry + marksComputerApplication;
    percentage = (totalMarks / 300.0) * 100;

    cout << "Roll No : " << rollNo << endl;
    cout << "Name of Student : " << name << endl;
    cout << "Marks in Physics : " << marksPhysics << endl;
    cout << "Marks in Chemistry : " << marksChemistry << endl;
    cout << "Marks in Computer Application : " << marksComputerApplication << endl;
    cout << "Total Marks = " << totalMarks << endl;
    cout << fixed << setprecision(2) << "Percentage = " << percentage << endl;
    calculateDivision(percentage);

    return 0;
}