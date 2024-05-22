// 1. "Create a class 'Counter' to keep track of the number of instances created. Use a static member variable 'instanceCount' to store the total number of objects created from the class and increment it every time an object is constructed.

#include<iostream>
using namespace std;

class Counter{
    private:
    static int instanceCount;
    public:
    Counter(){
        instanceCount++;
    }
    void displyCounter(){
        cout << "Total instances created: " << instanceCount << endl;
    }
};
int Counter::instanceCount = 0;
int main(){
    Counter c1, c2, c3, c4, c5;
    c1.displyCounter();
    return 0;
}