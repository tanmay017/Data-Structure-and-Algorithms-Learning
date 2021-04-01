#include <bits/stdc++.h>
using namespace std;
struct Bstnode
{
    int data;
    Bstnode* left;
    Bstnode* right;
};
Bstnode* GetNewNode(int data)
{
    Bstnode* newNode = new Bstnode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
Bstnode* insert(Bstnode* root,int data)
{
    if(root == NULL) root = GetNewNode(data); 
    else if(data <= root->data) root->left = insert(root->left,data);
    else root->right = insert(root->right,data);
    return root;
}
bool search(Bstnode* root,int key)
{
    if(root == NULL) return false;
    else if(key == root->data) return true;
    else if(key < root->data) search(root->left,key);
    else search(root->right,key);
}
void Inorder(Bstnode* root)
{
    if(!root) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
Bstnode* findmin(Bstnode* root)
{
    while(root->left != NULL) return root;
}
Bstnode* del(Bstnode* root,int data)
{
    if(root == NULL) return root;
    else if(data < root->data) root->left = del(root->left,data);
    else if(data > root->data) root->right = del(root->right,data);
    else
    {
        //case 1 ifthere is no child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        //case 2 if there is one child
        else if(root->left == NULL)
        {
            Bstnode* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL)
        {
            Bstnode* temp = root;
            root = root->left;
            delete temp;
        }
        //case 3 if there are both child
        else
        {
            Bstnode* temp = findmin(root->right);
            root->data = temp->data;
            root->right = del(root->right,temp->data);
        }
    }
    return root;
    
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
    root = del(root,20);
    cout<<"\nEnter the number to search : ";
    cin>>number;
    if(search(root,number) == true)  cout<<"\nNumber is found\n";
    else  cout<<"\nNumber not found\n";
    Inorder(root);
    return 0;
}