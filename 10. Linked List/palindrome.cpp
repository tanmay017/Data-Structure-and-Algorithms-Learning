#include <bits/stdc++.h> //There Exists one more solution of O(N) time and Aux Space Using Stack
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
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << (head->data) << " ";
        head = head->next;
    }
    cout << endl;
}
Node *reverseList(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
bool isPalindrome(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast->next->next != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    Node *rev = reverseList(slow->next);
    Node *curr = head;
    while (rev != NULL)
    {
        if (rev->data != curr->data)
            return false;
        rev = rev->next;
        curr = curr->next;
    }
    return true;
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 40);
    head = insertEnd(head, 30);
    head = insertEnd(head, 20);
    head = insertEnd(head, 10);
    if (isPalindrome(head))
        cout << "Yes";
    else
        cout << "No";
}