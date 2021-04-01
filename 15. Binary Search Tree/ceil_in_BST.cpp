#include <bits/stdc++.h> //iterative
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
Node *ceil(Node *root, int x)
{
    if (root == NULL)
        return NULL;
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key > x)
        {
            res = root;
            root = root->left;
        }
        else if (root->key < x)
            root = root->right;
        else
            return root;
    }
    return res;
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    root->right->right = new Node(80);
    int x = 17;
    cout << "Ceil: " << (ceil(root, x)->key);
}