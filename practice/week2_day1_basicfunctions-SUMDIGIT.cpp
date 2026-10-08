#include <iostream>
using namespace std;

int sum(int n) {
    int result = 0;
     for ( ;n != 0; n /= 10) {
        result += n%10;
     }
    return result;
} 

int main() {
    int n;
    cin >> n;
    cout << "sum digits = " << sum(n) << endl;

    return 0;
}