#include<bits/stdc++.h>
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
    while(temp1->next != NULL)
        temp1 = temp1->next;
    temp1->next = temp2;
}
void print()
{
    node* temp1 = head;
    while(temp1 != NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
    cout<<"\n";
}
void del(int pos)
{
    node* temp1 = head;
    node* temp2;
    if(pos == 1)
    {
        head = temp1->next;
        delete (temp1);
        return;
    }
    for(int i = 0;i < pos-2;i++)
    {
        temp1 = temp1->next;
    }
    temp2 = temp1->next;
    temp1->next = temp2->next;
    delete (temp2);
}

int main()
{
    head = NULL;
    insertAppend(6);
    insertAppend(9);
    insertAppend(10);
    insertAppend(1);
    print();
    del(2);
    print();
}