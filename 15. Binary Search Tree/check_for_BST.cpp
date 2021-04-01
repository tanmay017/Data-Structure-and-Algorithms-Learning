#include <bits/stdc++.h> //refer self paced DSA
using namespace std;
struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
//this will seems to be correct but its wrong refer self paced dsa
/*bool isBST(Node *root)
{
    if (root == NULL)
        return true;
    return isBST(root->left);
    return isBST(root->right);
    if (root->left->key >= root->key || root->right->key <= root->key)
        return false;
}*/
bool isBST(Node *root, int min = INT_MIN, int max = INT_MAX)
{
    if (root == NULL)
        return true;
    return (root->key > min && root->key < max && isBST(root->left, min, root->key) && isBST(root->right, root->key, max));
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->right = new Node(24);
    if (isBST(root))
        cout << "Yes";
    else
        cout << "No";
}