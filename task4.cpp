(IF ELSE IF )



#include <iostream>
using namespace std;

int main() {
    int month, year;
    cout << "Enter a month (1–12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;

    int days;

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) {
        days = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    }
    else if (month == 2) {
        if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
            days = 29;
        else
            days = 28;
    }
    else {
        cout << "Invalid month!" << endl;
        return 0;
    }

    cout << days << " days" << endl;
    return 0;
}


(NESTED IF)

 

#include <iostream>
using namespace std;

int main() {
    int month, year;
    cout << "Enter a month (1–12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;

    int days;

    if (month >= 1 && month <= 12) {
        if (month == 1 || month == 3 || month == 5 || month == 7 ||
            month == 8 || month == 10 || month == 12) {
            days = 31;
        }
        else {
            if (month == 4 || month == 6 || month == 9 || month == 11) {
                days = 30;
            }
            else { 
                if (year % 100 == 0) {
                    if (year % 400 == 0)
                        days = 29;
                    else
                        days = 28;
                } 
                else {
                    if (year % 4 == 0)
                        days = 29;
                    else
                        days = 28;
                }
            }
        }

        cout << days << " days" << endl;
    }
    else {
        cout << "Invalid month!" << endl;
    }

    return 0;
}



