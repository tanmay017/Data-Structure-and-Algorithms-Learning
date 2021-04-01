#include <bits/stdc++.h> //this is better approach
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
void spiralTrav(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s1;
    stack<Node *> s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            Node *curr = s1.top();
            s1.pop();
            cout << curr->key << " ";
            if (curr->left != NULL)
                s2.push(curr->left);
            if (curr->right != NULL)
                s2.push(curr->right);
        }
        while (!s2.empty())
        {
            Node *curr = s2.top();
            s2.pop();
            cout << curr->key << " ";
            if (curr->right != NULL)
                s1.push(curr->right);
            if (curr->left != NULL)
                s1.push(curr->left);
        }
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(33);
    root->right = new Node(45);
    root->left->left = new Node(9);
    root->left->right = new Node(27);
    root->right->left = new Node(31);
    root->right->right = new Node(23);
    root->left->left->left = new Node(51);
    root->left->left->right = new Node(90);
    spiralTrav(root);
}