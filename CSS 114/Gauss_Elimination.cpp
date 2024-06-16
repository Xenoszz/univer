#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iomanip>


using namespace std;

void inputEquations(float a[10][10], int n) {
    cout << "Coefficient of all Variables :\n";
    for (int i = 0; i < n; i++) {
        cout << "equation: " << i + 1 << "   ";
        for (int j = 0; j <= n; j++)
            cin >> a[i][j];
    }
}

void partialPivoting(float a[10][10], int n, int k) {
    for (int i = k + 1; i < n; i++) {
        if (abs(a[i][k]) > abs(a[k][k])) { // ตรวจสอบ pivot ในคอลัมน์ k
            for (int j = 0; j <= n; j++) {
                float temp = a[k][j];
                a[k][j] = a[i][j];
                a[i][j] = temp;
            }
        }
    }
}

// void displayMatrix(float a[10][10], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= n; j++)
//             printf("%6.1f", a[i][j]);
//         printf("\n");
//     }
// }

void forwardElimination(float a[10][10], int n) {
    float c;
    for (int k = 0; k < n - 1; k++) {
        for (int i = k; i < n - 1; i++) {
            c = (a[i + 1][k] / a[k][k]);
            for (int j = 0; j <= n; j++)
                a[i + 1][j] -= c * a[k][j];
        }
    }
}

// void displayUpperTriangularMatrix(float a[10][10], int n) {
//     printf("\n\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= n; j++)
//             printf("%6.1f", a[i][j]);
//         printf("\n");
//     }
// }

void backwardSubstitution(float a[10][10], float d[10], int n) {
    float temp;
    for (int i = n - 1; i >= 0; i--) {
        temp = 0;
        for (int j = i; j <= n - 1; j++)
            temp = temp + a[i][j] * d[j];
        d[i] = (a[i][n] - temp) / a[i][i];
    }
}

void displaySolution(float d[10], int n) {
    for (int i = 0; i < n; i++)
        cout << "x[" << setw(1) << i + 1 << "]="  << d[i] << endl;
        
}

int main() {
    int n;
    float a[10][10], d[10] = { 0 };

    cout << "Enter No of equations ? ";
    cin >> n;

    inputEquations(a, n);
for (int k = 0; k < n - 1; k++) {
    partialPivoting(a, n, k);
    forwardElimination(a, n);
}
    // displayMatrix(a, n);
    // displayUpperTriangularMatrix(a, n);
    backwardSubstitution(a, d, n);
    displaySolution(d, n);

    getch();
    return 0;
}
