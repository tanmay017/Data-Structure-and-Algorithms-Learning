#include <bits/stdc++.h> //method 2 is better
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
    queue<Node *> q;
    q.push(root);
    stack<int> s;
    bool reverse = false;
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (reverse)
                s.push(curr->key);
            else
                cout << curr->key << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        if (reverse)
        {
            while (!s.empty())
            {
                cout << s.top() << " ";
                s.pop();
            }
        }
        reverse = !reverse;
        cout << endl;
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(33);
    root->right = new Node(45);
    root->left->left = new Node(9);
    root->left->right = new Node(27);
    root->right->right = new Node(31);
    root->left->left->right = new Node(51);
    spiralTrav(root);
}