#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double totalCalories, fatGrams, caloriesFromFat, percentFat;

    cout << "Enter total calories: ";
    cin >> totalCalories;

    cout << "Enter fat grams: ";
    cin >> fatGrams;

    caloriesFromFat = fatGrams * 9;

     if (totalCalories <= 0 || caloriesFromFat > totalCalories) {
        cout << "Invalid input. Calories from fat cannot exceed total calories." << endl;
        return 0;
    }
    percentFat = (caloriesFromFat / totalCalories) * 100;

    cout << "Calories from fat: " << caloriesFromFat << endl;
    cout << "Percentage of calories from fat: " << fixed << setprecision(0) << percentFat << "%" << endl;

    if (percentFat < 30)
        cout << "This food is low in fat." << endl;
    else
        cout << "This food is not low in fat." << endl;

    return 0;
}


