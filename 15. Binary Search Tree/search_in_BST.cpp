#include <bits/stdc++.h> //Worst Time Taken is O(height of BST)
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

bool search(Node *root, int x)
{
    while (root != NULL)
    {
        if (root->key == x)
            return true;
        else if (root->key > x)
            root = root->left;
        else
            root = root->right;
    }
    return false;
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
    int x = 16;
    if (search(root, x))
        cout << "Found";
    else
        cout << "Not Found";
}
