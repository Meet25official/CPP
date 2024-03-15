#include <iostream>

using namespace std;

int main() {
    int physics, chemistry, math, totalMathsPhysics;

    // Input marks
    cout << "Input the marks obtained in Physics: ";
    cin >> physics;
    cout << "Input the marks obtained in Chemistry: ";
    cin >> chemistry;
    cout << "Input the marks obtained in Mathematics: ";
    cin >> math;

    // Calculate total and combined marks
    int total = physics + chemistry + math;
    totalMathsPhysics = physics + math;

    // Determine eligibility
    bool eligible = (physics >= 65 && chemistry >= 50 && math >= 65 && total >= 190) ||
                    (totalMathsPhysics >= 140);

    // Display output
    if (eligible) {
        cout << "The candidate is eligible for admission." << endl;
    } else {
        cout << "The candidate is not eligible for admission." << endl;
    }

    return 0;
}
