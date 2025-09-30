#include <iostream>
#include <vector>
using namespace std;

// Stub function
double calculateTotal(const vector<double> &prices) {
cout << "[Stub called: calculateTotal()]" << endl;
return 0.0;
}

int main() {
    vector<double> prices(3);

    // Ask the user for 3 item prices
    cout << "Enter 3 item prices: ";
    for (int i = 0; i < 3; ++i) {
        cin >> prices[i];
    }

    // Call the stub function to calculate the total
    double total = calculateTotal(prices);

    // Display the result
    cout << "Total = " << total << endl;

    return 0;
}