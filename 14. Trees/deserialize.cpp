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

const int EMPTY = -1;
int index = 0;
Node *deserialize(vector<int> &arr)
{
    if (index == arr.size())
        return NULL;
    int val = arr[index];
    index++;
    if (val == EMPTY)
        return NULL;
    Node *root = new Node(val);
    root->left = deserialize(arr);
    root->right = deserialize(arr);
    return root;
}

int main()
{
}