#include <iostream>
#include <iomanip>
using namespace std;

int getPentagonalNumber(int n)
{
	int pentagonalNumber = n * (3 * n - 1) / 2;
	
	return pentagonalNumber;

}

int main()
{
	for (int i= 1 ; i < 101; i++)
	{
		int n = 1;
		n++;
		cout << getPentagonalNumber(i);
		((i + 100) % 10 == 0) ? cout << endl : cout << " ";

	}


	return 0;
}
