#include<iostream>
using namespace std;

class MathOperations{
private:
    int a,b;
    float c,d;
public:
    MathOperations(int a1,int b1,float c1,float d1){
        a = a1;
        b = b1;
        c = c1;
        d = d1;
    }
    int opration(int a , int b, int c) {
        cout << "The sum of integer value:- ";
        return a+b+c;
    }
    
    int operation(int a, int b) {
        cout << "The subtrcact of integer value:- ";
        return a-b;
    }
    
    float operation(float a, float b , float c) {
        cout << "The multiplaction value:- ";
        return a*b*c;
    }
    float operation(float a, float b) {
        cout << "The division  value:- ";
        return a/b;
    }
};

int main() {
    MathOperations obj(2,3,4,5);
    cout << obj.operation(10,2,3) << endl;
    cout << obj.operation(20,3) << endl;
    cout << obj.operation(2.2f, 3.8f,3.4f) << endl;
    cout << obj.operation(6.7f,1.2f) << endl;
    return 0;
}