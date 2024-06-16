#include <iostream>
#include <cmath>
using namespace std;

// Function to perform partial pivoting
void partialPivoting(double a[10][10], int n, int i)
{
    float temp;
    for(i = 0; i < n; i++)
    {
        if(a[i][i] == 0)
        {
            // Find a row with a non-zero entry in the i-th column
            for(int j = i + 1; j < n; j++)
            {
                if(a[j][i] != 0)
                {
                    // Swap rows i and j
                    for(int k = 0; k <= n; k++)
                    {
                        float temp = a[i][k];
                        a[i][k] = a[j][k];
                        a[j][k] = temp;
                    }
                    break;
                }
            }
        }
    }
}

// Function to perform LU decomposition with partial pivoting
void LUdecomposition(double a[10][10], double l[10][10], double u[10][10], int n)
{
    double epsilon = 1e-10; // Define a very small number as epsilon

    // Initialize L and U matrices
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            l[i][j] = 0;
            u[i][j] = 0;
        }
    }

    // Perform LU decomposition with partial pivoting
    for (int i = 0; i < n; i++)
    {
        // Perform partial pivoting for the i-th column
        partialPivoting(a, n, i);

        // Upper triangular matrix
        for (int j = i; j < n; j++)
        {
            u[i][j] = a[i][j];
            for (int k = 0; k < i; k++)
            {
                u[i][j] -= l[i][k] * u[k][j];

            }
        }

        // Lower triangular matrix
        for (int j = i; j < n; j++)
        {
            if (i == j)
                l[i][j] = 1; // Diagonal elements of L matrix are 1
            else
            {
                l[j][i] = a[j][i];
                for (int k = 0; k < i; k++)
                {
                    l[j][i] -= l[j][k] * u[k][i];

                }
                l[j][i] /= u[i][i];

            }
        }

        // Check for singularity
        if (fabs(u[i][i]) < epsilon)
        {
            cout << "Matrix is singular." << endl;
            return;
        }
    }
}

int main()
{
    double a[10][10], l[10][10], u[10][10];
    int n = 0;

    // Input size of square matrix1
    cout << "Enter size of square matrix : ";
    cin >> n;

    // Input matrix values
    cout << "Enter matrix values: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Perform LU decomposition with partial pivoting
    LUdecomposition(a, l, u, n);

    // Display L Decomposition
    cout << "L Decomposition is as follows..." << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << l[i][j] << " ";
        }
        cout << endl;
    }

    // Display U Decomposition
    cout << "U Decomposition is as follows..." << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << u[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
