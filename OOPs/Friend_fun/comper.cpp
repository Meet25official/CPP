#include <iostream>
using namespace std;

class ClassB;

class ClassA{
    private:
        int numA;
    public:
        ClassA(int value):numA(value){}
        friend int compareValues(ClassA objA,ClassB objB);
};

class ClassB{
    private:
        int numB;
    public:
        ClassB(int value):numB(value){}
        friend int compareValues(ClassA objA,ClassB objB);
};
int compareValues(ClassA objA,ClassB objB){
    if(objA.numA > objB.numB){
        return 1;
    }
    else if(objA.numA < objB.numB){
        return -1;
    }
    else{
        return 0;
    }
}
int main(){
    ClassA a(20);
    ClassB b(10);

    int comparisonResult = compareValues(a,b);

    if (comparisonResult == 1)
    {
        cout << "ClassA greater value. " << endl;
    }
    else if(comparisonResult == -1)
    {
        cout << "ClassB greater value. " << endl;
    }
    else
    {
        cout << "Valuse are equal. " << endl;
    }
    
    return 0;
}