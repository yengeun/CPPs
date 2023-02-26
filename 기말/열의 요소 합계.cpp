#include <iostream>
using namespace std;

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex)
{
	double total = 0;
	for (int i =0; i < rowSize; i++)
	{
		total += m[i][columnIndex];
	}

	return total;
}

int main()
{
	const int rowSize = 3;
	const int SIZE = 4;
	double m[rowSize][SIZE];
	cout << " Enter a " << rowSize << "-by-" << SIZE << " matrix row by row: " << endl;
	for (int i = 0; i < rowSize; i++)
		for (int j = 0; j < SIZE; j++)
			cin >> m[i][j];

		cout << "Sum of the elements at column 0 is " << sumColumn(m, rowSize, 0) << endl;
		cout << "Sum of the elements at column 1 is " << sumColumn(m, rowSize, 1) << endl;
		cout << "Sum of the elements at column 2 is " << sumColumn(m, rowSize, 2) << endl;
		cout << "Sum of the elements at column 3 is " << sumColumn(m, rowSize, 3) << endl;

	return 0;
}