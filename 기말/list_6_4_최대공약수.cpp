#include <iostream>
using namespace std;

int gcd(int num1, int num2)
{
	int gcd = 1;
	int k = 2;

	while (k <= num1 && k <= num2)
	{
		if (num1 % k == 0 && num2 % k == 0)
			gcd = k;
			k++;
	}

	return gcd;
}

int main()
{
	cout << " Enter first integer: ";
	int num1;
	cin >> num1;

	cout << " Enter second integer: ";
	int num2;
	cin >> num2;

	cout << " The greatest common divisor for " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;

	return 0;
}
