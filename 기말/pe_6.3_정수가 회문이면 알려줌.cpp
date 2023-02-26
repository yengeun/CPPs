#include <iostream>
using namespace std;

int reverse(int number)
{
	int rv = 0;
	while (number)
	{
		int r = number % 10;
		rv = rv * 10 + r;
		number /= 10;
	}
	return rv;
}

bool isPalindrome(int number)
{
	if (number == reverse(number))
		return true;

	else
		return false;
}

int main()
{
	cout << "Enter the number: ";
	int number;
	cin >> number;

	if (isPalindrome(number) == true)
		cout << "number is palidrome";
	else
		cout << "number is not palidrome";

	return 0;
}