// 2. "Implement a 'MathUtility' class with a static member function 'factorial(int n)' that calculates and returns the factorial of a given integer 'n'. The function should be accessible without creating an instance of the class."

#include<iostream>
using namespace std;

class MathUtility{
    public:
    static int factorial(int n){
        int fact = 1;
        for(int i = 1; i <= n; i++){
            fact *= i;
        }
        return fact;
    }
};
int main(){
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if(num < 0){
        cout << "Error! Factorial of a negative number doesn't exist.";
    }
    else{   
        cout << "Factorial of " << num << " = " << MathUtility::factorial(num);
    }    
    return 0;
}