#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }

    cout << endl;

    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }

    int maxVal = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > maxVal) maxVal = arr[i]; int maxIndex = i;
    }

    int target;
    int found = -1;
    cout << "target = ";
    cin >> target;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == target) {
            found = i;
            break;
        }
    }
    
    if (found == -1) cout << "not found" << endl;
    else cout << "the target is: " << target << endl;

    return 0;
}