#include<iostream>
using namespace std;

class B;    //forward declaration

class A {
    private:
        int num1;
    
    public:
        A(int value) : num1(value){}
        friend int calculateSum(A obj1,B obj2);
};


class B {
    private:
        int num2;
    
    public:
        B(int value) : num2(value){}
        friend int calculateSum(A obj1,B obj2);
};

int calculateSum(A obj1,B obj2){
    return obj1.num1 + obj2.num2;
}

int main(){
    A num1(5);
    B num2(10);
    int sum;

    sum = calculateSum(num1,num2);
    cout << "sum of private members: " << sum << endl;

    return 0;
}