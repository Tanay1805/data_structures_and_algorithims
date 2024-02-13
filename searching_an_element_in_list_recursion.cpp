
#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

int getCount(Node* head)
{
	if (head == NULL) {
		return 0;
	}
	else {
		return 1 + getCount(head->next);
	}
}


int main()
{

	Node* head = NULL;
    int y,n;

    cout<<"Enter the number of elements you want to add in a linked list:";
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<":";
        cin>>y;
        push(&head,y);
    }   

	cout << "Count of nodes is " << getCount(head);
	return 0;
}
