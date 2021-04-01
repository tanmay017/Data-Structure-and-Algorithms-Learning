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
int intersection(Node *h1, Node *h2)
{
    int count1 = 0, count2 = 0;
    for (Node *curr = h1; curr != NULL; curr = curr->next)
        count1++;
    for (Node *curr = h2; curr != NULL; curr = curr->next)
        count2++;
    int skips = abs(count1 - count2);
    Node *curr1 = h1;
    Node *curr2 = h2;
    if (count1 > count2)
    {
        for (int i = 0; i < skips; i++)
            curr1 = curr1->next;
    }
    else
    {
        for (int i = 0; i < skips; i++)
            curr2 = curr2->next;
    }
    while (curr1 != NULL && curr2 != NULL)
    {
        if (curr1->data == curr2->data)
            return curr1->data;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return -1;
}
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
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    head1 = insertEnd(head1, 10);
    head1 = insertEnd(head1, 20);
    head1 = insertEnd(head1, 30);
    head1 = insertEnd(head1, 40);
    head1 = insertEnd(head1, 50);
    head1 = insertEnd(head1, 60);
    head1 = insertEnd(head1, 70);
    head2 = insertEnd(head2, 11);
    head2 = insertEnd(head2, 22);
    head2 = insertEnd(head2, 40);
    head2 = insertEnd(head2, 50);
    head2 = insertEnd(head2, 60);
    head2 = insertEnd(head2, 70);
    cout << intersection(head1, head2);
}
