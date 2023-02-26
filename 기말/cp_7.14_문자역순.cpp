#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "ABCD";
	for (int i = 0, j = s.size() / 2; i < s.size(); i++, j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

	for (int i = 0; i < s.size(); i++)
		cout << "The reversed string is " << s[i] << endl;

	return 0;
}
