#include <iostream>
using namespace std;

int main() {
    int n, guess, maxattemps, score;
    bool haswon = 0;
    char choice;

    do {    
        int times = 0;
        cout << "pick a secret number: ";
        cin >> n;
        cout << "max attemps = ";
        cin >> maxattemps;

        do {
            if ( times == maxattemps) {
                cout << "you lose, the number is " << n << endl;
                break;
            }
            times++;

            cout << "your guess = ";
            cin >> guess;

            if ( guess > n) cout << "too high" << endl;
            else if ( guess < n) cout << "too low" << endl;
            else cout << "correct" << endl;

        } while ( guess != n);

        if ( guess == n) {
            if ( !haswon || times < score) {
                score = times;
                haswon = 1;
            }
        }

        cout << "click c to continue or others to stop: ";
        cin >> choice; 
    } while ( choice == 'c'); 
    
    if ( haswon == 1) cout << "Best score = " << score;
    else cout << "You haven't win any round yet";

    return 0;
}