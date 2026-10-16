#include <iostream>
using namespace std;

void findIndex(int arr[], int SIZE, int target) {
    int index = -1;

    for (int i = 0; i < SIZE; i++) {
        if (target = arr[i]) {
            index = i;
            break;
        }
    }

    cout << index;
}

int main() {
    int SIZE, target;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    return 0;
}