#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int grid[ROWS][COLS];
    int sumAll = 0;
    int grid2[ROWS][COLS];
    int grid3[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> grid2[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid3[i][j] = grid[i][j] + grid2[i][j];
            cout << grid3[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < ROWS; i++) {
        int rowSum = 0;
        for (int j = 0; j < COLS; j++) {
            rowSum += grid[i][j];
        }
        cout << "sum row " << i << "= " << rowSum << endl;
    }    

    for (int j = 0; j < COLS; j++) {
        int colSum = 0;
        for (int i = 0; i < ROWS; i++) {
            colSum += grid[i][j];
        }
        cout << "sum col " << j << "= " << colSum << endl;
        sumAll += colSum;
    }   

    cout << "sum of all elements = " << sumAll << endl;

    int sumAntidiagonal = 0;
    int sumMaindiagonal = 0;
    for (int i = 0; i < ROWS; i++) {
        sumMaindiagonal += grid[i][i];
        sumAntidiagonal += grid[i][ROWS - 1 - i];
    }
    cout << "sum main diagonal: " << sumMaindiagonal << endl;
    cout << "sum Anti diagonal: " << sumAntidiagonal << endl;

    int t[COLS][ROWS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            t[j][i] = grid[i][j];
        }
    }

    for ( int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;

    int maxROW = 0;
    int maxCOL = 0;
    int maxVal = grid[0][0];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (maxVal < grid[i][j]) {
                maxVal = grid[i][j];
                maxROW = i;
                maxCOL = j;
            }
        }
    }
    cout << "max element: " << maxVal << endl << "row: " << maxROW << endl << "col: " << maxCOL << endl;

    return 0;
}