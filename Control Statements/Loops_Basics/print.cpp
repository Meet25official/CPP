#include <iostream>

using namespace std;

int main() {
    int num = 1;
    do{
        cout << "The num = " << num;
        num++;
    }
    while(num<=5 && num>0);
    return 0;
}