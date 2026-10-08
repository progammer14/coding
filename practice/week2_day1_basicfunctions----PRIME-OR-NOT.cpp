#include <iostream>
using namespace std;

bool isPrime ( int n) {
    int check = 0;
    if ( n < 2) return false;
    for ( int i = 2; i < n; i++) {
        if ( n%i == 0) check++;
    }
    return check == 0;
}

int main () {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "prime" << endl;
    } else cout << "not prime" << endl;

    return 0;
}