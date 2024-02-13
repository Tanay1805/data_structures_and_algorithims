
void insertBeforeElement(int arr[], int& size, int element, int target) {
    int index = 0;
    while (index < size && arr[index] != target) {
        index++;
    }

    if (index < size) {
        for (int i = size; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        size++;
        cout << "Element inserted before the specified element." << endl;
    } else {
        cout << "Element not found. Cannot insert before." << endl;
    }
}