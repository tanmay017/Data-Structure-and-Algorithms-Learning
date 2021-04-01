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
Node *segregate(Node *head)
{
    Node *es = NULL, *ee = NULL, *os = NULL, *oe = NULL;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        int x = curr->data;
        if (x % 2 == 0)
        {
            if (es == NULL)
            {
                es = curr;
                ee = curr;
            }
            else
            {
                ee->next = curr;
                ee = ee->next;
            }
        }
        else
        {
            if (os == NULL)
            {
                os = curr;
                oe = curr;
            }
            else
            {
                oe->next = curr;
                oe = oe->next;
            }
        }
    }
    if (es == NULL || os == NULL)
        return head;
    ee->next = os;
    oe->next = NULL;
    return es;
}
int main()
{
    Node *head = NULL;
    head = insertBegin(head, 10);
    head = insertBegin(head, 20);
    head = insertBegin(head, 30);
    head = insertBegin(head, 11);
    head = insertBegin(head, 33);
    head = insertBegin(head, 55);
    head = insertBegin(head, 77);
    head = insertBegin(head, 99);
    printList(head);
    head = segregate(head);
    printList(head);
}
