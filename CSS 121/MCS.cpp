#include <iostream>

using namespace std;

void swapRows(int dataarray[][4], int row1, int row2) {
    for (int i = 0; i < 4; i++) {
        int temp = dataarray[row1][i];
        dataarray[row1][i] = dataarray[row2][i];
        dataarray[row2][i] = temp;
    }
}
void sortABC(int dataarray[][4], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (dataarray[i][1] > dataarray[j][1] || 
                (dataarray[i][1] == dataarray[j][1] && dataarray[i][2] > dataarray[j][2]) || 
                (dataarray[i][1] == dataarray[j][1] && dataarray[i][2] == dataarray[j][2] && dataarray[i][3] > dataarray[j][3])) {
                swapRows(dataarray, i, j);
            }
        }
    }
}
void sortBCA(int dataarray[][4], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (dataarray[i][2] > dataarray[j][2] || 
                (dataarray[i][2] == dataarray[j][2] && dataarray[i][3] > dataarray[j][3]) || 
                (dataarray[i][2] == dataarray[j][2] && dataarray[i][3] == dataarray[j][3] && dataarray[i][1] > dataarray[j][1])) {
                swapRows(dataarray, i, j);
            }
        }
    }
}
void display(int dataArray[][4], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 4; j++) {
            cout << dataArray[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int dataArray[14][4] = {
        {1,1,1,4},
        {2,3,1,1},
        {3,4,4,4},
        {4,2,4,4},
        {5,3,5,3},
        {6,4,3,3},
        {7,1,3,3},
        {8,2,4,3},
        {9,3,3,5},
        {10,1,5,3},
        {11,1,1,4},
        {12,4,1,1},
        {13,5,2,3},
        {14,3,5,2}
    };
    sortABC(dataArray, 14);
    cout << "Sorted A -> B -> C:" << endl;
    display(dataArray, 14);
    sortBCA(dataArray, 14);
    cout << "Sorted B -> C -> A:" << endl;
    display(dataArray, 14);
    return 0;
}