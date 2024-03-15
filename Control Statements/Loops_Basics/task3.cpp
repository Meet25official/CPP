#include <iostream>
using namespace std;

int main()
{
    int num, r, sum = 0, temp;
    // Prompt user for input
    cout << "\n\n Check whether a given number is an Armstrong number or not :\n";
    cout << "-----------------------------------------------------------------\n";
    cout << " Input a number: ";
    cin >> num; // Input the number to check

    // Loop to calculate the sum of cubes of digits
    for (temp = num; num != 0; num = num / 10) 
    {
        r = num % 10; // Extract the digit
        sum = sum + (r * r * r); // Cube each digit and add to sum
    }

    // Check if the sum of cubes of digits equals the original number
    if (sum == temp)
        cout << temp << " is an Armstrong number." << endl; // Print if it's an Armstrong number
    else
        cout << temp << " is not an Armstrong number." << endl; // Print if it's not an Armstrong number
}
