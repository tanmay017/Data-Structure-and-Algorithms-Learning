#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* head;

void insert(int key,int pos)
{
    node* temp1 = new node();
    node* temp2 = new node();
    temp2 = head;
    temp1->data = key;
    temp1->next = NULL;
    if(pos == 1)
    {
        temp1->next = head;
        head = temp1;
    }
    else
    {
        for(int i = 0;i < pos-2;i++)
        {
            temp2 = temp2->next;
        }
        temp1->next = temp2->next;
        temp2->next = temp1;
    }
    
}
void printList()
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    head = NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(5,2);
    printList();
}