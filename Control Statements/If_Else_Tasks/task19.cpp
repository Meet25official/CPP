#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int customerID, unitsConsumed;
    string customerName;

    cout << "Enter customer ID: ";
    cin >> customerID;

    cout << "Enter customer name: ";
    cin.ignore(); // Clear input buffer
    getline(cin, customerName);

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;

    double amount = 0, surcharge = 0, netAmount = 0;

    // Calculate base charges based on unit consumption
    if (unitsConsumed <= 199) {
        amount = unitsConsumed * 1.20;
    } else if (unitsConsumed <= 399) {
        amount = (199 * 1.20) + ((unitsConsumed - 199) * 1.50);
    } else if (unitsConsumed <= 599) {
        amount = (199 * 1.20) + (200 * 1.50) + ((unitsConsumed - 399) * 1.80);
    } else {
        amount = (199 * 1.20) + (200 * 1.50) + (200 * 1.80) + ((unitsConsumed - 599) * 2.00);
    }

    // Apply surcharge if applicable
    if (amount > 400) {
        surcharge = amount * 0.15;
        netAmount = amount + surcharge;
    } else {
        netAmount = amount;
        // Ensure minimum bill is Rs. 100
        if (netAmount < 100) {
            netAmount = 100;
        }
    }

    // Display bill information
    cout << fixed << setprecision(2);
    cout << "Customer IDNO :" << customerID << endl;
    cout << "Customer Name :" << customerName << endl;
    cout << "unit Consumed :" << unitsConsumed << endl;
    cout << "Amount Charges @Rs. " << (unitsConsumed <= 599 ? 2.00 : 1.80) << " per unit : " << amount << endl;
    if (surcharge > 0) {
        cout << "Surcharge Amount : " << surcharge << endl;
    }
    cout << "Net Amount Paid By the Customer : " << netAmount << endl;

    return 0;
}
