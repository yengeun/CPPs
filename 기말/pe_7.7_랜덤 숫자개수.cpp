#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int counts[100];
	for (int i = 0; i < 100; i++)
	{
		counts[i] = 0;
	}

	srand(time(0));
	for (int i = 0; i < 100; i++)
	{
		int randNum = rand() % 10;
		counts[randNum]++;
	}

	for (int i = 0; i < 100; i++)
	{
		if (counts[i] > 0)
			cout << i << " occurs " << counts[i] << endl;
	}

	return 0;
}