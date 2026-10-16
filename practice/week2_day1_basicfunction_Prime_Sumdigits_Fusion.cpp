#include <iostream>
using namespace std;

bool isPrime(int n) {
    int check = 0;
    if ( n < 2) return false;
    for ( int i = 2; i < n; i++) {
        if (n % i == 0) check++;
    }  
    return check == 0;
}

int sumDigits(int n) {
    if (n < 0) n = -n;
    int result = 0;
    for ( ; n != 0; n /= 10) {
        result += n%10;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "prime" << endl;
    } else cout << "not prime" << endl;
    cout << "sum digits = " << sumDigits(n) << endl;

    return 0;
}