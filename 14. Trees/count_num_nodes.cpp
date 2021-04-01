#include <bits/stdc++.h> //Count Numbers of Nodes in Complete Binary Tree
using namespace std;     //This Solution is O(logN * logN)
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        right = left = NULL;
    }
};

int countNodes(Node *root)
{
    int lh = 0;
    int rh = 0;
    Node *curr = root;
    while (curr != NULL)
    {
        curr = curr->left;
        lh++;
    }
    curr = root;
    while (curr != NULL)
    {
        curr = curr->right;
        rh++;
    }
    if (lh == rh)
        return pow(2, lh) - 1;
    else
        return 1 + countNodes(root->left) + countNodes(root->right);
}
