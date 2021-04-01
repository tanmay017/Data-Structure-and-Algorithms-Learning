#include <bits/stdc++.h>
using namespace std;

struct Bstnode
{
    int data;
    Bstnode *left,*right;
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
    if(root == NULL) root = GetNewNode(data);
    else if(data <= root->data) root->left = insert(root->left,data);
    else root->right = insert(root->right,data);
    return root;
}
bool search(Bstnode* root,int data)
{
    if(root == NULL) return false;
    else if(data < root->data) search(root->left,data);
    else if(data > root->data) search(root->right,data);
    else return true;
}
void inorder(Bstnode* root)
{
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Bstnode* findMin(Bstnode* root)
{
    while(root->left != NULL) root = root->left;
    return root;
}
Bstnode* del(Bstnode* root,int data)
{
    if(root == NULL) return root;
    else if(data < root->data) root->left = del(root->left,data);
    else if(data > root->data) root->right = del(root->right,data);
    else
    {
        //case 1 when root have no child
        if(root->right == NULL && root->left == NULL)
        {
            delete root;
            root = NULL;
        }
        //case 2 when root have one child
        else if(root->left == NULL)
        {
            Bstnode* temp = root;
            root = temp->right;
            delete temp;
        }
        else if(root->right == NULL)
        {
            Bstnode* temp = root;
            root = temp->left;
            delete temp;
        }
        else
        {
            Bstnode* temp = findMin(root->right);
            root->data = temp->data;
            root->right = del(root->right,temp->data);  
        }
        
    }
    return root;
}
bool is_bst(Bstnode* root,int minValue = INT_MIN,int maxValue = INT_MAX)
{
    if(root == NULL) return true;
    if(root->data < maxValue && root->data > minValue && is_bst(root->left,minValue,root->data) && is_bst(root->right,root->data,maxValue))
    return true;
    else return false;
    
}
int main()
{
    Bstnode* root = NULL;
    int number;
    bool judge;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,25);
    root = insert(root,30);
    root = insert(root,12);
    root = del(root,30);
    if(is_bst(root)) cout<<"Yes the is binary search tree";
    else cout<<"Nope its not binary search tree";
    return 0;
}