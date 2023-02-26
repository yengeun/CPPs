#include <iostream>
using namespace std;

bool isSorted(const int list[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (list[i] > list[i + 1])
            return false;
        
    }
    return true;
}

int main()
{
    int list[80];
    cout << "Enter list: ";
    cin >> list[0];
    for (int i = 1; i <= list[0]; i++)
        cin >> list[i];

    isSorted(list, list[0])
        ? cout << "The list is already sorted" << endl
        : cout << "The list is not sorted" << endl;
    return 0;
}