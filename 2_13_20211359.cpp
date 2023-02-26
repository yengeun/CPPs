//20211359 ½Å¿¹Àº, notebook, Intel(R) Core(TM) i5-7200U CPU @ 2.50GHz (64bit), 8.00GB, Windows 11

#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cout << "Enter the monthly saving amount: ";
	cin >> a;

	double b = 0.00417;
	
	double sum = 0.0;
	for (int i = 1; i <= 6; i++)
		sum = (sum + a) * (1 + b);
		cout << "After the sixth month, the account value is $" << sum << endl;
	return 0;
}