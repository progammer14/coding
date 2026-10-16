#include <iostream>
#include <cmath>
using namespace std;

int sumTo(int n) {
    if (n == 0) {
        return 0;
    }
    return n > 0 ? n + sumTo(n-1) : n + sumTo(n+1);
}

void printOnetoN(int n) {
    if (n == 0 || n <= 0) { 
        return; 
    }
    printOnetoN(n - 1);
    cout << n << " ";
}

int sumDigits(int n) {
    if (n < 0) {
        n = -n;
    }
    if (n == 0) {
        return 0;
    }
    return n%10 + sumDigits(n/10);
}

int power(int n, int exp) {
    if (exp == 0) {
        return 1;
    }
    return n * power(n, exp-1);
}

int gcd(int n, int m) {
    if (m == 0) {
        return n;
    }
    n = abs(n);
    m = abs(m);
    return gcd(m, n%m);

}

int main() {
    int n, m, exp;
    cin >> n >> m >> exp;
    cout << gcd(n,m) << endl;
    return 0;
}