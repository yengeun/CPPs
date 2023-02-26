#include <iostream>
#include <cstring>
using namespace std;

int count(const char s[], char a)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == a)
            count++;
    }
    return count;
}

int main()
{
    cout << "Enter a string: ";
    char s1[100];
    cin.getline(s1, 100);

    cout << "Enter a character: ";
    char a;
    cin >> a;

    cout << a << " appears in " << s1 << " " << count(s1, a) << " times " << endl;
    return 0;
}