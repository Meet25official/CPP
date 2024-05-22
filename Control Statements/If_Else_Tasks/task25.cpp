#include <iostream>
using namespace std;

int main() {
    int choice, r, l, w, b, h;
    float area;

    cout << "Input 1 for area of circle\n";
    cout << "Input 2 for area of rectangle\n";
    cout << "Input 3 for area of triangle\n";
    cout << "Input 4 for area of square\n";
    cout << "Input your choice : ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Input radius of the circle : ";
            cin >> r;
            area = 3.14 * r * r;
            cout << "The area is : " << area << endl;
            break;
        case 2:
            cout << "Input length and width of the rectangle : ";
            cin >> l >> w;
            area = l * w;
            cout << "The area is : " << area << endl;
            break;
        case 3:
            cout << "Input the base and height of the triangle :";
            cin >> b >> h;
            area = 0.5 * b * h;
            cout << "The area is : " << area << endl;
            break;
        case 4:
            cout << "Input the side of the square :";
            cin >> r;
            area = r * r;
            cout << "The area is : " << area << endl;
            break;
        default:
            cout << "Please choose from the given options.\n";
            break;
    }

    return 0;
}