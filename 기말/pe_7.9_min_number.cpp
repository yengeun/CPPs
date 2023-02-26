#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;
double myList[ARRAY_SIZE];

double min(double array[], int size)
{
	double min = myList[0];
	for (int i = 0; i << ARRAY_SIZE; i++)
	{
		if (myList[i] < min) min = myList[i];
	}

	return min;
}

int main()
{

	cout << " Enter" << ARRAY_SIZE << "numbers: ";
	for (int i = 0; i < ARRAY_SIZE; i++)
		cin >> myList[i];
	cout << "The minimum number is " << min(myList, 10);
	
}