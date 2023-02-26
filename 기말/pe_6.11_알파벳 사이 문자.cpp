#include <iostream>
using namespace std;

void printChars(char ch1, char ch2, int numberPerLine)
{
	int first = static_cast<int>(ch1);
	int last = static_cast<int>(ch2);
	int count = 0;
	for (int i = first; i <= last; i++)
	{
		cout << static_cast<char>(i) << " ";
		count++;
		if (count % 10 == 0)
		{
			cout << endl;
		}
	}
}

int main()
{
	cout << " Enter the character1: ";
	char ch1;
	cin >> ch1;

	cout << " Enter the character2: ";
	char ch2;
	cin >> ch2;

	cout << "The character between ch1 and ch2 " << endl;
	printChars(ch1,ch2,10);

	return 0;
}