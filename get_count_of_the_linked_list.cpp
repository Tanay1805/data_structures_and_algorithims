#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
};
void push_node(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
int getCount(Node *head)
{
    int count = 0;
    Node *current = head;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
int main()
{
    Node *head = NULL;

    int n = 5;
    int y;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number in a linked list " << i + 1 << ": ";
        cin >> y;
        push_node(&head, y);
    }
    cout << "Number of nodes in the linked list: " << getCount(head) << endl;
    return 0;
}
