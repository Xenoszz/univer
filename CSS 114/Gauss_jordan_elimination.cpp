#include<iostream>
#include<iomanip>
#include<cmath>
#define N 3
using namespace std;

// Function for partial pivoting
void partialPivoting(float Matrix[N][N + 1]) {
    for (int i = 0; i < N; i++) {
        if (Matrix[i][i] == 0) {
            // Find a row with a non-zero entry in the i-th column
            for (int j = i + 1; j < N; j++) {
                if (Matrix[j][i] != 0) {
                    // Swap rows i and j
                    for (int k = 0; k <= N; k++) {
                        float temp = Matrix[i][k];
                        Matrix[i][k] = Matrix[j][k];
                        Matrix[j][k] = temp;
                    }
                    break;
                }
            }
        }
    }
}


// Function to make the matrix an identity or diagonal matrix
void diagonalizeMatrix(float Matrix[N][N + 1]) {
    for (int j = 0; j < N; j++) {
        float divisor = Matrix[j][j]; // Store the divisor for the current row
        // Divide each element in the row by the divisor
        for (int k = 0; k < N + 1; k++) {
            Matrix[j][k] /= divisor;
        }
        // Make other elements in the same column as the diagonal element 0
        for (int i = 0; i < N; i++) {
            if (i != j) {
                float temp = Matrix[i][j];
                for (int k = 0; k < N + 1; k++) {
                    Matrix[i][k] -= temp * Matrix[j][k];
                }
            }
        }
    }
}

// Function to print the matrix
void printMatrix(float Matrix[N][N + 1]) {
    cout << "\n ---------------------------------\n";
    cout << "\n Diagonal Matrix is:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N + 1; j++) {
            cout << setw(8) << setprecision(2) << Matrix[i][j];
        }
        cout << endl;
    }
    cout << "\n ---------------------------------\n";
}



// Function to print the solution
void printSolution(float Matrix[N][N + 1]) {
    cout << "\n The Solution is:\n";
    for (int i = 0; i < N; i++) {
        cout << "x[" << setw(3) << i + 1 << "]=" << setw(7) << setprecision(2) << Matrix[i][N] / Matrix[i][i] << endl;
    }
}

int main() {
    float Matrix[N][N + 1];

    //variables for loops
    int i, j;

    //Scan values of Matrix.
    cout << "Enter Elements of " << N << " Rows & " << N + 1 << " Columns\n";

    for (i = 0; i < N; i++) {
        cout << "\tEnter Row " << i + 1 << " & Press Enter\n";
        for (j = 0; j <= N; j++)
            cin >> Matrix[i][j];
    }


    partialPivoting(Matrix);
    diagonalizeMatrix(Matrix);
    printMatrix(Matrix);
    printSolution(Matrix);

    return 0;
}
