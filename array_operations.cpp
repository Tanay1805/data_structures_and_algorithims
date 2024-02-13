#include <iostream>
#include <string>
using namespace std;

void user_list(int arr[], int n)
{
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "\nThe smallest element is: " << smallest << endl;
    cout << "The largest element is: " << largest << endl;
}

int main()
{
    int n;
    const int arr_size = 10; 
    int arr[arr_size];
    
    cout << "Enter the number of elements (up to " << arr_size << "): ";
    cin >> n;
    
    if (n > arr_size || n < 0)
    {
        cout << "Invalid input. Exiting...\n";
        return 1; 
    }
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    user_list(arr, n);

    return 0;
}
