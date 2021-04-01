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
int nthfromEnd(Node *head, int n)
{
    if (head == NULL)
        return -1;
    Node *first = head;
    Node *second = head;
    for (int i = 1; i <= n; i++)
    {
        if (first == NULL)
            return -1;
        first = first->next;
    }
    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    return second->data;
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    head = insertEnd(head, 60);
    head = insertEnd(head, 70);
    head = insertEnd(head, 80);
    cout << nthfromEnd(head, 3);
}