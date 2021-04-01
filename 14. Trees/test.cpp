#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int main()
{
    Node *T1 = new Node(30);
    T1->left = new Node(40);
    T1->right = new Node(50);
    Node *T2 = new Node(30);
    T2->left = new Node(40);
    T2->right = new Node(50);
    if (T1 == T2)
        cout << "Yes";
    else
        cout << "No";
}