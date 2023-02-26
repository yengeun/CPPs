#include <iostream>
using namespace std;


void reverse(int& number)
{
	int rv = 0;
	while (number)
	{
		int r = number % 10;
		rv = rv * 10 + r;
		number /= 10;
 	}

	number = rv;
}


int main()
{
 	cout << "Enter the number: ";
	int number;
	cin >> number;

	reverse(number);
	cout << " The reverse number is : " << number;

	return 0;
}