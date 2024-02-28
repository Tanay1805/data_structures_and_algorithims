// Medium:

// Design a function, "reverseDoublyLinkedList," to reverse a doubly linked list of integers. The function should modify the pointers in each node such that the list is reversed, and return the head of the reversed list.



// Example:

// Given the doubly linked list: 3 <-> 7 <-> 12 <-> 9 <-> 5

// After reversal: 5 <-> 9 <-> 12 <-> 7 <-> 3

#include "iostream"
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;

    Node(int d): data(d), prev(nullptr), next(nullptr) {};
};

void add(Node*& head, int data) {
    Node* newNode = new Node(data);

    if (!head) {
        head = newNode;
    } else {
        Node* currentNode = head;
        while (currentNode->next) {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
        newNode->prev = currentNode;
    }
}
void reverseNodes(Node*& head) {
    Node *current=head;
    Node *newhead=nullptr;

    while(current!=nullptr) {
        Node *temp=current->next;
        current->next=current->prev;
        current->prev=temp;
        newhead=current;
        if(temp==nullptr) {
            head=newhead;  
        }
        current=temp;
    }
}
void display(Node *head) {
    Node *ptr=head;
    while(ptr!=nullptr) {
        cout<<ptr->data<<" <-> ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main() {
    Node* headstart = nullptr;
    int val;
   for(int i=0;i<5;i++)
   {
    cout<<"Enter the value for:"<<i+1<<":";
    cin>>val;
    add(headstart,val);
   }

    display(headstart);

    reverseNodes(headstart);

    display(headstart);
}