#include <iostream>
using namespace std;

class ClassA {
private:
    int privateData;

public:
    ClassA(int data) : privateData(data) {}

    friend void ModifyPrivateData(ClassA& obj, int newValue);
    friend int getPrivateData();
};

void ClassA::ModifyPrivateData(ClassA& obj, int newValue) {
    obj.privateData = newValue;
}

int ClassA::getPrivateData()  {
    return privateData;
}

int main() {
    ClassA objA(42);
    cout << "Initial privateData value: " << objA.getPrivateData() << endl;

    ModifyPrivateData(objA, 99);
    cout << "Modified privateData value: " << objA.getPrivateData() << endl;

    return 0;
}