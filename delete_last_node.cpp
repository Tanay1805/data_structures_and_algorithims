#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node*next;
};

void deletionofLastNode(Node*&head,int NUM){
    Node*newNode= new Node;
    newNode->data=NUM;
    newNode->next=head;

    head=newNode;
}

void printList(Node*head){
    Node*nextptr=head;
    while (nextptr!=nullptr)
    {
       cout<<nextptr->data;
        nextptr=nextptr->next;
        cout<<endl;
    }
}