#include <iostream>
using namespace std;


const int ARRAY_SIZE = 10;
double myList[ARRAY_SIZE];

int indexOfSamllestElement(double array[], int size)
{
	double min = myList[0];
	int indexOfMin = 0;
	
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (myList[i] < min)
		{
			min = myList[i];
			indexOfMin = i;
		}
	}

	return indexOfMin;
}

int main()
{
	cout << " Enter" << ARRAY_SIZE << "numbers: ";
	for (int i = 0; i < ARRAY_SIZE; i++)
		cin >> myList[i];
	cout << "The mininum's index is " << indexOfSamllestElement(myList, 10);


	return 0;
}