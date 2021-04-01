#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next; //this property make the structure as self referential structure
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30); // Short and Clean implementation
}