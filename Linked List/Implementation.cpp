#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

int main()
{
    node* first = NULL;
    node* second = NULL;
    node* third = NULL;
    first = new node();
    second = new node();
    third = new node();
    node* head;
    head = first;
    first->data = 10;
    first->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    while(head != NULL)        //traversal in linked list
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}