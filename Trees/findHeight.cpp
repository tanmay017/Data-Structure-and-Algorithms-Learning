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
int findHeight(Bstnode* root)
{
    if(root == NULL) return -1;
    return max(findHeight(root->left),findHeight(root->right)) + 1; 
}
int main()
{
    Bstnode* root = NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,25);
    root = insert(root,30);
    root = insert(root,12);
    cout<<"HEight of the tree is : "<<findHeight(root);
    return 0;
}