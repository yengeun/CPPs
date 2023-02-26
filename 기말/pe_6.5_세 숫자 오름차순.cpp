#include <iostream>
using namespace std;

void displaySortedNumbers(double num1, double num2, double num3)
{
	if (num1 > num2)
	{
		double temp = num1;
		num1 = num2;
		num2 = temp;

	}

	if (num2 > num3)
	{
		double temp = num2;
		num2 = num3;
		num3 = temp;
	}

	if (num1 > num2)
	{
		double temp = num1;
		num1 = num2;
		num2 = temp;
	}

	cout << num1 << num2 << num3;
}

int main()
{
	double num1, num2, num3;
	cout << " Enter the three number: ";
	cin >> num1 >> num2 >> num3;

	cout << "The result is: ";
	displaySortedNumbers(num1, num2, num3);

	return 0;

}