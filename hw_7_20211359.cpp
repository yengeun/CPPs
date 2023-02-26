// 20211359 ½Å¿¹Àº
#include <iostream>
using namespace std;

void sortThreeNumbers(double& number1, double& number2, double& number3);

int main()
{
	double number1, number2, number3;
	cout << " Enter three numbers: ";
	cin >> number1 >> number2 >> number3;

	sortThreeNumbers(number1, number2, number3);

	cout << "After sorting three numbers:" << endl;
	cout << number1 << " " << number2 << " " << number3 << endl;
	return 0;
}


void sortThreeNumbers(double& number1, double& number2, double& number3)
{
	if (number1 > number2)
	{
		double temp = number1;
		number1 = number2;
		number2 = temp;
	}

	if (number2 > number3)
	{
		double temp = number2;
		number2 = number3;
		number3 = temp;
	}

	if (number1 > number2)
	{

		double temp = number1;
		number1 = number2;
		number2 = temp;
	}

}
	
