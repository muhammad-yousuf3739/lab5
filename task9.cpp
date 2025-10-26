#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, distance, ratePer500, shippingCost;

    cout << "Enter weight of package (kg): ";
    cin >> weight;

    cout << "Enter distance (miles): ";
    cin >> distance;
    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight. Must be between 0 and 20 kg." << endl;
        return 0;
    }

    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance. Must be between 10 and 3000 miles." << endl;
        return 0;
    }
    if (weight <= 2)
        ratePer500 = 1.10;
    else if (weight <= 6)
        ratePer500 = 2.20;
    else if (weight <= 10)
        ratePer500 = 3.70;
    else
        ratePer500 = 4.80;
    shippingCost = ((distance / 500) * ratePer500);

    cout << fixed << setprecision(1);
    cout << "Shipping cost: $" << shippingCost << endl;

    return 0;
}


