#include <bits/stdc++.h> //for short and clean implementation refer clean_implementation.cpp
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
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
}