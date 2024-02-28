//  Easy:
// Develop a function named "findUniqueElement" with the objective of searching for the unique element that appear "ONLY ONCE" in the whole SORTED ARRAY .

// The array contains 'n' elements sorted in ascending order with every element appearing more than once except one .
#include <iostream>
using namespace std;

int findUniqueElement(int array1[], int n) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
    
        if ((mid == 0 || array1[mid] != array1[mid - 1]) && 
            (mid == n - 1 || array1[mid] != array1[mid + 1])) {
            return array1[mid];
        }


        if ((mid % 2 == 0 && array1[mid] == array1[mid + 1]) || 
            (mid % 2 != 0 && array1[mid] == array1[mid - 1])) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int array1[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++) {
        cin >> array1[i];
    }

    int uniqueElement = findUniqueElement(array1, n);
    if (uniqueElement != -1) {
        cout << "The unique element in the array is: " << uniqueElement << endl;
    } else {
        cout << "No unique element found in the array." << endl;
    }

    return 0;
}

