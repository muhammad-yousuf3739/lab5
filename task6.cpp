#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int units;
    double costPerUnit = 99.0;     // Base price per unit
    double totalCost, discount = 0.0;

    cout << "Enter number of units sold: ";
    cin >> units;

    
    if (units >= 100)
        discount = 0.5;          
    else if (units >= 50)
        discount = 0.4;          
    else if (units >= 20)
        discount = 0.3;          
    else if (units >= 10)
        discount = 0.2;          
    else
        discount = 0.0;          
    totalCost = (units * costPerUnit) * (1 - discount);

    cout << fixed << setprecision(1);
    cout << "Total cost after discount: $" << totalCost << endl;

    return 0;
}


