#include <bits/stdc++.h> //Uses Height Function
using namespace std;     //based on formula lh+rh+1
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
int res = 0;
int diameter(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = diameter(root->left);
    int rh = diameter(root->right);
    res = max(res, lh + rh + 1);
    return 1 + max(lh, rh);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(60);
    root->left->left = new Node(30);
    root->left->right = new Node(80);
    root->left->left->left = new Node(40);
    root->left->left->right = new Node(50);
    root->left->right->right = new Node(90);
    root->left->left->left->left = new Node(60);
    root->left->right->right->right = new Node(18);
    cout << "Height of Tree is : " << diameter(root) << " and the its diameter is : " << res;
}