#include <iostream>
using namespace std;

int main() {
    float n1;
    float n2;
    float result;
    char ope;

    // Get input from the user
    cout << "Enter 1st digit: ";
    cin >> n1;

    cout << "Enter 2nd digit: ";
    cin >> n2;

    cout << "Choose the operation (+, -, *, /): ";
    cin >> ope;

    // Perform the selected operation
    switch (ope) {
        case '+':
            result = n1 + n2;
            cout << "Answer: " << n1<< " + " << n2 << " = " << result << endl;
            break;
        case '-':
            result = n1 - n2;
            cout << "Answer: " << n1 << " - " << n2 << " = " << result << endl;
            break;
        case '*':
            result = n1 * n2;
            cout << "Answer: " << n1 << " * " << n2 << " = " << result << endl;
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
                cout << "Answer: " << n1 << " / " << n2 << " = " << result << endl;
            } else {
                cout << "Sorry it is not divided by zero!." << endl;
            }
            break;
        default:
            cout << "Sorry for inconvenience but this is not a valid operation !." << endl;
    }

    return 0;
}
