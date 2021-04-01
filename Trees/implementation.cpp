#include <bits/stdc++.h>
using namespace std;

struct Bstnode{
    int data;
    Bstnode* left;
    Bstnode* right;
};

Bstnode* GetNewNode(int data)
{
    Bstnode* new_node = new Bstnode();
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    return new_node;
}

Bstnode* insert(Bstnode* root,int data)
{
    if(root == NULL)  root = GetNewNode(data);
    else if(data <= root->data)  root->left = insert(root->left,data);
    else root->right = insert(root->right,data);
    return root;
}

bool search(Bstnode* root,int data)
{
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return search(root->left,data);
    else return search(root->right,data);
}

void inorder(Bstnode* root)
{
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    Bstnode* root = NULL;
    int number;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,25);
    root = insert(root,30);
    root = insert(root,12);
    cout<<"\nEnter the number to search : ";
    cin>>number;
    if(search(root,number) == true)  cout<<"\nNumber is found\n";
    else   cout<<"\nNumber not found\n";
    inorder(root);
}