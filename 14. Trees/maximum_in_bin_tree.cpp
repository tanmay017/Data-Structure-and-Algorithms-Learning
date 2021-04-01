#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int maxInTree(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    return max(root->key, max(maxInTree(root->left), maxInTree(root->right)));
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(80);
    root->right->right = new Node(70);
    root->right->right->right = new Node(30);
    cout << "Maximum Value in this tree is : " << maxInTree(root);
}