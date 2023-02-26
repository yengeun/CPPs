#include <iostream>
using namespace std;

int sumDigits(long n)
{
	int num = 0;
	for (int i = n; i > 0; i /= 10) num += i % 10;

	return num;

}

int main()
{
	cout << " Enter the number: ";
	signed long n;
	cin >> n;
	
	cout << "The sum is: " << sumDigits(n);

	return 0;
}