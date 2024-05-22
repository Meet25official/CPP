// 3. Develop a simple calculator class. Add a destructor that prints a farewell message when a calculator object is destroyed.

#include<iostream>
using namespace std;

class SimpleCalculator{
    private:
    double num1, num2;
    public:
    SimpleCalculator(){
        cout << "Welcome to Simple Calculator!" << endl;
    }
    ~SimpleCalculator(){
        cout << "Goodbye! Thanks for using Simple Calculator." << endl;
    }
};
int main(){
    SimpleCalculator calc;
    return 0;
}