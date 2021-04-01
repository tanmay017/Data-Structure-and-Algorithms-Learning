#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *next;
    Node(int k)
    {
        key = k;
        next = NULL;
    }
};
Node *interSection(Node *head1, Node *head2)
{
    if (head1 == NULL || head2 == NULL)
        return NULL;
    int l1 = 0;
    int l2 = 0;
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL)
    {
        temp1 = temp1->next;
        l1++;
    }
    while (temp2 != NULL)
    {
        temp2 = temp2->next;
        l2++;
    }
    int k = abs(l1 - l2);
    int cycleAt = l1 - k;
    temp1 = head1;
    for (int i = 1; i < cycleAt; i++)
        temp1 = temp1->next;
    return temp1;
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(-1);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next = new Node(9);
    Node *head2 = new Node(1);
    head2->next = new Node(7);
    head2->next->next = head->next->next->next->next;
    Node *temp = interSection(head, head2);
    cout << temp->key;
}