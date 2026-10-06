#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op, choice;
    string history = "";

    do { 

        cin >> a >> op >> b;
        switch (op) {
            case '+' :
                history += to_string(a) + " + " + to_string(b) + " = " + to_string(a + b) + "\n";
                cout << a << " + " << b << " = " << a+b << endl;
                break;
            case '-' :
                history += to_string(a) + " - " + to_string(b) + " = " + to_string(a - b) + "\n";
                cout << a << " - " << b << " = " << a-b << endl;
                break;
            case '*' :
                history += to_string(a) + " * " + to_string(b) + " = " + to_string(a * b) + "\n";
                cout << a << " * " << b << " = " << a*b << endl;
                break;
            case '/' :
                if ( b == 0) {
                    cout << " cannot divide by zero" << endl;
                } else {
                    history += to_string(a) + " / " + to_string(b) + " = " + to_string(a / b) + "\n";
                    cout << a << " / " << b << " = " << a/b << endl;
                }
                break;
                
            default : 
                cout << "invalid" << endl;
        }

        cout << "c to continue or others to quit: ";
        cin >> choice;

    } while ( choice == 'c');
    cout << history;

    return 0;
}