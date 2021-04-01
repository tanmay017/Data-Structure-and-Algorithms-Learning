#include <bits/stdc++.h> //Clone the linked list with Random Pointer/Reference
using namespace std;     //Refer Self Paced DSA tricky problem hard to guess

struct Node
{
    int data;
    Node *next;
    Node *random;
    Node(int x)
    {
        data = x;
        next = NULL;
        random = NULL;
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
        cout << head->data << " ";
        head = head->next;
    }
}
Node *clone(Node *head)
{
    for (Node *curr = head; curr != NULL;) //Step 1 Make a copy of node and next to it
    {
        Node *next = curr->next;
        curr->next = new Node(curr->data);
        curr->next->next = next;
        curr = next;
    }
    for (Node *curr = head; curr != NULL; curr = curr->next->next) //Step 2 Link the randoms
        curr->next->random = (curr->random != NULL) ? curr->random->next : NULL;

    Node *original = head, *copy = head->next; //Step 3 separate list
    Node *temp = copy;
    while (original != NULL && copy != NULL)
    {
        original->next = (original->next != NULL) ? original->next->next : original->next;
        copy->next = (copy->next != NULL) ? copy->next->next : copy->next;
        original = original->next;
        copy = copy->next;
    }
    return temp;
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    head1 = insertEnd(head1, 10);
    head1 = insertEnd(head1, 20);
    head1 = insertEnd(head1, 30);
    head1 = insertEnd(head1, 30);
    head1 = insertEnd(head1, 30);
    head2 = clone(head1);
    printList(head2);
}