#include <iostream>
using namespace std;

const int SIZE = 4;
double sumMajorDiagonal(const double m[][SIZE])
{
	double total = 0;
	for (int i = 0; i < SIZE; i++)
	{
		total += m[i][i];
	}

	return total;
}

int main()
{
	const int ROW_SIZE = 4;
	double matrix[ROW_SIZE][SIZE];
	cout << " Enter a " << ROW_SIZE << "-by-" << SIZE << " matrix row by row: " << endl;
	for (int i = 0; i < ROW_SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			cin >> matrix[i][j];
	cout << " Sum of the elements in the major diagonal is " << sumMajorDiagonal(matrix) << endl;
}
