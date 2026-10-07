#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c)/ 2;
    cout << fixed << setprecision(2);
        if (a < 0 || b < 0 || c < 0 || a + b <= c || a + c <= b || b + c <= a) cout << "Khong phai tam giac" << endl;
        else {

            if ( a == b && a == c) {
                cout << "Tam giac deu, dien tich = " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl; 
            } 

            else if ( a == b || a == c || b == c) {
                    cout << "Tam giac can, dien tich = " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
                }

            else if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a ) {
                cout << "Tam giac vuong, dien tich = " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
            }
            
            else cout << "Tam giac thuong, dien tich = " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
        } 
    

    

    return 0;
}


