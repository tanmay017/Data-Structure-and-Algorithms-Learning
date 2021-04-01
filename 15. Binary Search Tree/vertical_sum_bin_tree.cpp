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
void inorder(Node *root, map<int, int> &m, int hh = 0)
{
    if (root == NULL)
        return;
    m[hh] += root->key;
    inorder(root->left, m, hh - 1);  //throwing error when using hh--
    inorder(root->right, m, hh + 1); //throwing error when using hh++
}
void verticalSum(Node *root)
{
    map<int, int> m;
    inorder(root, m);
    for (auto x : m)
        cout << x.second << " ";
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(15);
    root->left->left = new Node(35);
    root->left->left->left = new Node(40);
    root->right = new Node(25);
    root->left->right = new Node(20);
    root->left->right->right = new Node(75);
    root->left->right->right->right = new Node(80);
    verticalSum(root);
}