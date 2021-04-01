#include <bits/stdc++.h>
using namespace std;

struct node //working
{
    int data;
    node* next;
};

void insert(node** head,int data,int pos) //working
{
    node* before = *head;
    node* new_node = new node();
    new_node->data = data;
    for(int i = 0;i < pos-2;i++)  before = before->next;
    new_node->next = before->next;
    before->next = new_node;
}
void push(node** head,int data) //working
{
    node* new_node = new node();
    new_node->next = *head;
    new_node->data = data;
    *head = new_node;
}
void append(node** head,int data) //working
{
    node* new_node = new node();
    node* last = *head;
    new_node->data = data;
    new_node->next = NULL;
    if(*head == NULL)
    {
        *head = new_node;
        return;
    }
    while(last->next != NULL) last = last->next;
    last->next = new_node;
}
void del(node** head,int pos) //working
{
    if(*head == NULL) return;
    node *temp,*before = *head;
    if(pos == 1)
    {
        temp = *head;
        *head = temp->next;
        delete temp;
        return;
    }
    for(int i =0;i < pos-2;i++)  before = before->next;
    temp = before->next;
    before->next = temp->next;
    delete temp;
}

void printList(node** head) //working
{
    node* temp = *head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

int main()
{
    node* head = NULL;
    push(&head,12);
    push(&head,7);
    push(&head,8);
    append(&head,20);
    printList(&head);
    insert(&head,2,3);
    printList(&head);
    del(&head,5);
    printList(&head);
}
