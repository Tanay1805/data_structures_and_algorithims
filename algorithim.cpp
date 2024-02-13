#include <iostream>

using namespace std;

void insertElement(int arr[], int& n, int pos, int val) {
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = n; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = val;

    n++;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos = 2;  
    int val = 10; 

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertElement(arr, n, pos, val);

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
