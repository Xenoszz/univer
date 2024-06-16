#include <iostream>

#define N 3

using namespace std;

int main()
{
	int m[N][N]; 
	float d = 0;

	cout << "Enter elements of the matrix:\n";
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> m[i][j];

	// finding determinant of the matrix
	for (int i = 0; i < N; i++)
		d = d + (m[0][i] * (m[1][(i + 1) % N] * m[2][(i + 2) % N] - m[1][(i + 2) % N] * m[2][(i + 1) % N]));

	if (d != 0) // Condition to check if the determinant is zero or not, if zero then inverse doesn't exist
	{
		cout << "\nInverse of the matrix is: \n";
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
				cout << ((m[(j + 1) % N][(i + 1) % N] * m[(j + 2) % N][(i + 2) % N]) - (m[(j + 1) % N][(i + 2) % N] * m[(j + 2) % N][(i + 1) % N])) / d << "\t"; // finding adjoint and dividing it by determinant
			cout << "\n";

		}
	}
	else
		cout << "Inverse doesn't exist for this matrix";
	return 0;
}
