#include <iostream>
using namespace std;

struct Node {
    int key;
    struct Node *next;
};

void push(struct Node** head_node, int new_key)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->key = new_key;
    new_node->next = (*head_node);
    (*head_node) = new_node;
}

bool search(struct Node* head, int x) {
    if (head == NULL) {
        return false;
    }
    if (head->key == x) {
        return true;
    }
    return search(head->next, x);
}

int main() {
    struct Node* head = NULL;
    int x,y;

    int n=5;

    for (int i=0;i<n;i++)
    {
        cout<<"Enter the number you want to add"<<i+1<<":";
        cin>>y;
        push(&head,y);
    }

    cout<<"Enter the element you want to search:";
    cin>>x;

    if (search(head, x)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
