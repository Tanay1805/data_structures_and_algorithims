#include <iostream>
using namespace std;

int main()
{
    int n = 0, item, position, m;

    cout << "Enter the number of elements you want in the array: ";
    cin >> m;
    int array1[m];

    for (int i = 0; i < m; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array1[i];
        n++;
    }

    cout << "Enter the item you want to delete: ";
    cin >> item;
    cout << "Enter the position of the element you want to delete: ";
    cin >> position;

    if (position < 0 || position >= n)
    {
        cout << "Invalid position";
        return 0;
    }

    for (int i = position-1; i < n - 1; i++)
    {
        array1[i] = array1[i + 1];
    }
    n--;

    cout << "The elements in the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << array1[i] << " ";
    }
    return 0;
}

