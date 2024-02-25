#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    
    cout << "Enter the number of students: ";
    cin >> rows;

    cout << "Enter the number of subjects: ";
    cin >> columns;

    int array1[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        cout << "Enter marks for student " << i + 1 << ":" << endl;
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter marks for subject " << j + 1 << ": ";
            cin >> array1[i][j];
        }
    }

    cout << "Entered marks:" << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < columns; j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
