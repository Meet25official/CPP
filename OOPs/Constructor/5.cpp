#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    int age;

public:
    // Constructor with parameters
    Student(const std::string& studentName, int studentRollNumber, int studentAge)
        : name(studentName), rollNumber(studentRollNumber), age(studentAge) {}

    // Method to display student information
    void displayStudentInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    // Creating a student object
    Student student1("Alice", 101, 20);

    // Displaying student information
    std::cout << "Student Information:" << std::endl;
    student1.displayStudentInfo();

    return 0;
}
