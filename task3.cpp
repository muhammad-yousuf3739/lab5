#include <iostream>
using namespace std;

int main() {
    double seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    if (seconds >= 86400) {
        double days = seconds / 86400;
        cout << "That is approximately " << days << " days." << endl;
    }
    else if (seconds >= 3600) { 
        double hours = seconds / 3600;
        cout << "That is approximately " << hours << " hours." << endl;
    }
    else if (seconds >= 60) { 
        double minutes = seconds / 60;
        cout << "That is approximately " << minutes << " minutes." << endl;
    }
    else {
        cout << "That is " << seconds << " seconds." << endl;
    }

    return 0;
}



