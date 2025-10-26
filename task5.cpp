#include <iostream>
#include <cstdlib>
#include <ctime>#i
using namespace std;

int main() {
    srand(time(0));
    int num1 = rand() % 500;
    int num2 = rand() % 500;



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num1 = rand() % 500;
    int num2 = rand() % 500;

    int userAnswer, correctAnswer;

    cout << "   " << num1 << endl;
    cout << "+  " << num2 << endl;
    cout << "------" << endl;
    cout << "Enter your answer: ";
    cin >> userAnswer;
    correctAnswer = num1 + num2;
    if (userAnswer == correctAnswer) {
        cout << "Congratulations! Your answer is correct!" << endl;
    } else {
        cout << "Sorry, that’s incorrect." << endl;
        cout << "The correct answer is: " << correctAnswer << endl;
    }

    return 0;
}
