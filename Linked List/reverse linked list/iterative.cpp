#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head;
void insertAppend(int key)
{
    node* temp1 = head;
    node* temp2 = new node();
    temp2->data = key;
    temp2->next = NULL;
    if(head == NULL) 
    {
        head = temp2;
        return;
    }
    while(temp1->next != NULL)  temp1 = temp1->next;
    temp1->next = temp2;
}
void print()
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

void reverse()
{
    node* prev;
    node* current;
    node* next;
    current = head;
    prev = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main()
{
    head = NULL;
    insertAppend(3);
    insertAppend(5);
    insertAppend(7);
    insertAppend(9);
    print();
    reverse();
    print();
}