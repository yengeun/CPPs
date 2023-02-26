#include <iostream>
using namespace std;

int average(const int array[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += array[i];
	return sum / size;
}

double average(const double array[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
		sum += array[i];
	return sum / size;
}

int main()
{
	cout << "Enter ten values: ";
	double list[10];
	for (int i = 0; i < 10; i++)
		cin >> list[i];
	cout << "The average is " << average(list, 10) << endl;

	return 0;
}