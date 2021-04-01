#include <bits/stdc++.h> //O(n) time and O(1) Aux Space
using namespace std;     //best performance for this problem

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
bool detectLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            return true;
    }
    return false;
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
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = head->next->next->next;
    if (detectLoop(head))
        cout << "Yes";
    else
        cout << "No";
}