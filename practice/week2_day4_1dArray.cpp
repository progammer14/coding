#include <iostream>
using namespace std;

void findIndex(int arr[], int SIZE, int target) {
    int index = -1;

    for (int i = 0; i < SIZE; i++) {
        if (target == arr[i]) {
            index = i;
            break;
        }
    }

    cout << index << endl;
}

bool isSorted(int arr[], int SIZE) {
    for (int i = 0; i < SIZE - 1; i++) {

        if ( (arr[i+1] < arr[i]) ) {
            return false;
            break;
        }
    }

    return true;
}

int findMax(int arr[], int SIZE) {
    int max = arr[0];
    for (int i = 1; i < SIZE; i++) {

        if (arr[i] > max) {
            max = arr[i];
        }

    }
    return max;
}

int main() {
    int SIZE, target;
    cout << "size = ";
    cin >> SIZE;
    int arr[SIZE];
    
    
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "target: ";
    cin >> target;
    
    findIndex(arr, SIZE, target);
    cout << isSorted(arr, SIZE) << endl;
    cout << findMax(arr, SIZE) << endl;

    return 0;
}