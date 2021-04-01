#include <bits/stdc++.h> //According to problem we have to delete node without using help node just by the help of pointer pointing to it
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void delNode(Node *pointer)
{
    Node *temp = pointer->next;
    pointer->data = temp->data;
    pointer->next = temp->next;
    delete (temp);
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << (head->data) << " ";
        head = head->next;
    }
    cout << endl;
}
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
int main()
{
    Node *head = NULL;
    Node *pointer = NULL;
    head = insertBegin(head, 10);
    head = insertBegin(head, 20);
    head = insertBegin(head, 30);
    head = insertBegin(head, 40);
    head = insertBegin(head, 50);
    head = insertBegin(head, 60);
    head = insertBegin(head, 70);
    head = insertBegin(head, 80);
    pointer = head->next->next->next;
    delNode(pointer);
    printList(head);
}
