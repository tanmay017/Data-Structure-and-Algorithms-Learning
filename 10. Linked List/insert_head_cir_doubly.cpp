#include <bits/stdc++.h> //insert at end will have same implementation just need to return head;
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};
Node *insertHead(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->prev = temp;
        temp->next = temp;
        return temp;
    }
    temp->prev = head->prev;
    head->prev->next = temp;
    head->prev = temp;
    temp->next = head;
    return temp; //return head for insert at end
}
void printList(Node *head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}

int main()
{
    Node *head = NULL;
    head = insertHead(head, 50);
    head = insertHead(head, 40);
    head = insertHead(head, 30);
    head = insertHead(head, 20);
    head = insertHead(head, 10);
    printList(head);
}