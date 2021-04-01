#include <bits/stdc++.h>
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
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
    return head;
}
Node *merge(Node *head1, Node *head2)
{
    Node *head;
    Node *next1 = head1;
    Node *next2 = head2;
    if (head1->data <= head2->data)
    {
        head = head1;
        next1 = head1->next;
    }
    else
    {
        head = head2;
        next2 = head2->next;
    }
    Node *curr = head;
    while (next1 != NULL && next2 != NULL)
    {
        if (next1->data <= next2->data)
        {
            curr->next = next1;
            next1 = next1->next;
            curr = curr->next;
        }
        else
        {
            curr->next = next2;
            next2 = next2->next;
            curr = curr->next;
        }
    }
    if (next1 == NULL)
        curr->next = next2;
    else
        curr->next = next1;
    return head;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *head = NULL;
    head1 = insertEnd(head1, 10);
    head1 = insertEnd(head1, 20);
    head1 = insertEnd(head1, 30);
    head2 = insertEnd(head2, 5);
    head2 = insertEnd(head2, 25);
    head = merge(head1, head2);
    printList(head);
}
