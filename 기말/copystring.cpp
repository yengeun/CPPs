#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s1[20];
	char s2[20] = " Dallas, T";
	char s3[10] = "123456789";

	strcpy_s(s1, sizeof(s1), s2);
	strncpy_s(s3, sizeof(s3), s2, 9);


	cout << "The string in s1 is " << s1 << endl;
	cout << "The string in s2 is " << s2 << endl;
	cout << "The string in s3 is " << s3 << endl;
	cout << " The length of string s3 is " << strlen(s3) << endl;

	return 0;
}