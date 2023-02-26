#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s1[20] = "Dallas";
	char s2[20] = "Texas, USA";
	char s3[20] = "Dallas";

	strcat_s(s1, sizeof(s1), ", ");
	strcat_s(s1, sizeof(s1), s2);
	strcat_s(s3, sizeof(s3), ", ");
	strncat_s(s3, sizeof(s3), s2, 5);

	cout << "The string in s1 is " << s1 << endl;
	cout << "The stirng in s2 is " << s2 << endl;
	cout << "The string in s3 is " << s3 << endl;
	cout << "The length of string s1 is " << strlen(s1) << endl;
	cout << "The length of string s3 is " << strlen(s3) << endl;

	return 0;
}