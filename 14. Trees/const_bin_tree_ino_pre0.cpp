#include <bits/stdc++.h> //This code is for problem construct binary tree from Inorder and Postorder
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

Node *cTree(int in[], int pre[], int is, int ie)
{
    if (is > ie)
        return NULL;
    static int preIndex = 0; //can be also used global variable
    Node *root = new Node(pre[preIndex++]);
    int inIndex;
    for (int i = is; i <= ie; i++)
    {
        if (root->key == in[i])
        {
            inIndex = i;
            break;
        }
    }
    root->left = cTree(in, pre, is, inIndex - 1);
    root->right = cTree(in, pre, inIndex + 1, ie);
    return root;
}
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int main()
{
    int in[] = {20, 10, 40, 30, 50};
    int pre[] = {10, 20, 30, 40, 50};
    int n = sizeof(in) / sizeof(in[0]);
    Node *root = cTree(in, pre, 0, n - 1);
    inorder(root);
}