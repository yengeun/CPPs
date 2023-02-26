#include <iostream>
using namespace std;

int main()
{
    const int MAX_NUMBER_OF_STUDENTS= 100;
    cout << "Enter the number of students: ";
    int numberOfStudents, best = 0;
    cin >> numberOfStudents;
    int scores[MAX_NUMBER_OF_STUDENTS];

    cout << "Enter " << numberOfStudents << " scores: ";
    for (int i = 0; i < numberOfStudents; i++)
    {
        cin >> scores[i];
        if (scores[i] > best)
        {
            best = scores[i];
        }
    }

    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << "Student " << i << " score is " << scores[i] << " and grade is ";
        if (scores[i] >= best - 10)
        {
            cout << "A\n";
        }
        else if (scores[i] >= best - 20)
        {
            cout << "B\n";
        }
        else if (scores[i] >= best - 30)
        {
            cout << "C\n";
        }
        else if (scores[i] >= best - 40)
        {
            cout << "D\n";
        }
        else
        {
            cout << "F\n";
        }
    }
    return 0;
}