// 4. "Develop a 'Student' class to represent students' academic records. Use a static member function 'calculateAverageScore(Student* students, int count)' that takes an array of 'Student' objects and calculates the average score of all the students."
#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int score;
    public:
    Student(string n, int s){
        name = n;
        score = s;
    }
    string getName(){
        return name;
    }
    int getScore(){
        return score;
    }
    static double calculateAverageScore(Student* students, int count){
        double sum = 0.0;
        for(int i = 0; i < count; i++){
            sum += students[i].getScore();
        }
        return sum / count;
    }
};
int main(){
    Student students[] = {
        Student("Alice", 85),
        Student("Bob", 90),
        Student("Charlie", 78),
        Student("David", 92)
        };
        int count = sizeof(students) / sizeof(students[0]);
        cout << "Average score: " << Student::calculateAverageScore(students, count) << endl;
        return 0;
}