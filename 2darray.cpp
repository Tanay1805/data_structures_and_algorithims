#include <iostream>
using namespace std;

void arra(int n, int l) {
    int arr[n][l];


    cout << "Enter elements for the array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Array elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, l;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> l;
    arra(n, l);
    return 0;
}
