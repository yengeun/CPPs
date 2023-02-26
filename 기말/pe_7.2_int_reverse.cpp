#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 10;
	int num[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << " Enter the number: ";
		cin >> num[i];
	}

	for (int i = SIZE - 1; i >= 0; i--)
		cout << num[i] << " ";

	return 0;

}