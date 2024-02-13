#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertAtEnd(int arr[], int& size, int element) {
    if (size < MAX_SIZE) {
        arr[size++] = element;
        cout << "Element inserted at the end." << endl;
    } else {
        cout << "Array is full. Cannot insert." << endl;
    }
}

void insertAtBeginning(int arr[], int& size, int element) {
    if (size < MAX_SIZE) {
        
        for (int i = size; i > 0; --i) {
            arr[i] = arr[i - 1];
        }
        arr[0] = element;
        size++;
        cout << "Element inserted at the beginning." << endl;
    } else {
        cout << "Array is full. Cannot insert." << endl;
    }
}
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

void insertAfterElement(int arr[], int& size, int element, int target) {
    int index = 0;
    while (index < size && arr[index] != target) {
        index++;
    }

    if (index < size - 1) {
    
        for (int i = size; i > index + 1; --i) {
            arr[i] = arr[i - 1];
        }
        arr[index + 1] = element;
        size++;
        cout << "Element inserted after the specified element." << endl;
    } else if (index == size - 1) {

        arr[size++] = element;
        cout << "Element inserted after the specified element." << endl;
    } else {
        cout << "Element not found. Cannot insert after." << endl;
    }
}

void insertAtIndex(int arr[], int& size, int element, int index) {
    if (size < MAX_SIZE && index >= 0 && index <= size) {
            for (int i = size; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        size++;
        cout << "Element inserted at index " << index << "." << endl;
    } else if (size >= MAX_SIZE) {
        cout << "Array is full. Cannot insert." << endl;
    } else {
        cout << "Invalid index. Cannot insert." << endl;
    }
}

void deleteElement(int arr[], int& size, int target) {
    int index = 0;
    while (index < size && arr[index] != target) {
        index++;
    }

    if (index < size) {
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element deleted." << endl;
    } else {
        cout << "Element not found. Cannot delete." << endl;
    }
}

void deleteElementAtIndex(int arr[], int& size, int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element at index " << index << " deleted." << endl;
    } else {
        cout << "Invalid index. Cannot delete." << endl;
    }
}

void deleteLastElement(int arr[], int& size) {
    if (size > 0) {
        size--;
        cout << "Last element deleted." << endl;
    } else {
        cout << "Array is empty. Cannot delete last element." << endl;
    }
}

void deleteFirstElement(int arr[], int& size) {
    if (size > 0) {
        for (int i = 0; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "First element deleted." << endl;
    } else {
        cout << "Array is empty. Cannot delete first element." << endl;
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, index;

    do {
        cout << "\nMenu:\n";
        cout << "1. Inserting in the end of the array\n";
        cout << "2. Insert at the beginning in the array\n";
        cout << "3. Insert before an element in the array\n";
        cout << "4. Insert after an element in the array\n";
        cout << "5. Insert at a certain index in the array\n";
        cout << "6. Delete particular element from the array\n";
        cout << "7. Delete element at a given index\n";
        cout << "8. Delete last element\n";
        cout << "9. Delete first element\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to insert at the end: ";
                cin >> element;
                insertAtEnd(arr, size, element);
                break;
            case 2:
                cout << "Enter the element to insert at the beginning: ";
                cin >> element;
                insertAtBeginning(arr, size, element);
                break;
            case 3:
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << "Enter the element before which to insert: ";
                cin >> index;
                insertBeforeElement(arr, size, element, index);
                break;
            case 4:
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << "Enter the element after which to insert: ";
                cin >> index;
                insertAfterElement(arr, size, element, index);
                break;
            case 5:
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << " Enter the index: ";
                cin >> index;
                insertAtIndex(arr, size, element, index);
                break;
            case 6:
                cout << "Enter the element to delete: ";
                cin >> element;
                deleteElement(arr, size, element);
                break;
            case 7:
                cout << "Index which element has to be deleted: ";
                cin >> index;
                deleteElementAtIndex(arr, size, index);
                break;
            case 8:
                deleteLastElement(arr, size);
                break;
            case 9:
                deleteFirstElement(arr, size);
                break;
            case 0:
                cout << "Exiting\n";
                break;
            default:
                cout << " Please try again.\n";
        }

        cout << "\nCurrent Array: ";
        displayArray(arr, size);

    } while (choice != 0);

    return 0;
}
