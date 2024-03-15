#include <iostream>

using namespace std;

int main() {
    int cost_price, selling_price, profit_loss;

    // Get the cost price and selling price from the user
    cout << "Enter cost price: ";
    cin >> cost_price;
    cout << "Enter selling price: ";
    cin >> selling_price;

    // Calculate profit or loss
    profit_loss = selling_price - cost_price;

    // Check if there is profit or loss and display the result
    if (profit_loss > 0) {
        cout << "You can booked your profit amount : " << profit_loss << endl;
    } else if (profit_loss < 0) {
        cout << "You incurred a loss of : " << -profit_loss << endl;
    } else {
        cout << "No profit, no loss." << endl;
    }

    return 0;
}
