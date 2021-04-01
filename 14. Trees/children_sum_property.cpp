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
bool isCSum(Node *root)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    int sum = 0;
    if (root->left != NULL)
        sum += root->left->key;
    if (root->right != NULL)
        sum += root->right->key;
    return (root->key == sum && isCSum(root->left) && isCSum(root->right));
}
int main()
{
    Node *root = new Node(30);
    root->left = new Node(17);
    root->right = new Node(13);
    root->left->left = new Node(10);
    root->left->right = new Node(7);
    root->right->right = new Node(13);
    if (isCSum(root))
        cout << "Yes";
}