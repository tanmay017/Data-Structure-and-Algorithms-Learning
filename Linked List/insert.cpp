#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* head;
void insertFirst(int key)
{
    Node* node = new Node();
    node->data = key;
    if(head == NULL) node->next = NULL;
    else node->next = head;
    head = node;
}
void printList(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    int n,temp;
    cout<<"\nEnter the number of elements to insert in list : ";
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        cin>>temp;
        insertFirst(temp);
    }
    printList(head);
}