#include <iostream>
using namespace std;

double min(double array[], int size)
{
    double min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int main()
{
    cout << "Enter ten numbers: ";
    double array[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    double minimum = min(array, 10);
    cout << "The minimum number is " << minimum << endl;
    return 0;
}