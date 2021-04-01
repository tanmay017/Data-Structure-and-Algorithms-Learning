#include <bits/stdc++.h>
using namespace std;

struct TrieNode
{
    TrieNode *child[26]; //Could be 256 if we want to Add all characters 
    bool isEnd;
    TrieNode()
    {
        isEnd = false;
        for(int i = 0;i < 26;i++)
            child[i] = NULL;
    }
};

bool isEmpty(TrieNode *root)
{
    for(int i = 0;i < 26;i++)
        if(root->child[i] != NULL)
            return false;
    return true;
}

void insert(TrieNode* root,string key)
{
    TrieNode *curr = root;
    for(int i = 0;i < key.length();i++)
    {
        int index = key[i] - 'a';
        if(curr->child[index] == NULL)
            curr->child[index] = new TrieNode();
        curr = curr->child[index];
    }
    curr->isEnd = true;
}

bool search(TrieNode* root,string key)
{
    TrieNode *curr = root;
    for(int i = 0;i < key.length();i++)
    {
        int index = key[i] - 'a';
        if(curr->child[index] == NULL)
            return false;
        curr = curr->child[index];
    }
    return curr->isEnd;
}

TrieNode *delKey(TrieNode *root,string key,int i)
{
    if(root == NULL) return NULL;

    if(i == key.length())
    {
        root->isEnd = false;
        if(isEmpty(root))
        {
            delete(root);
            root = NULL;
        }
        return root;
    }

    int index = key[i] - 'a';
    root->child[index] = delKey(root->child[index],key,i+1);

    if(isEmpty(root) && root->isEnd == false)
    {
        delete(root);
        root = NULL;
    }
    return root;
}

int main()
{
    TrieNode *root = new TrieNode();

    string s1 = "geek";
    string s2 = "geeks";
    string s3 = "zoo";
    string s4 = "cut";
    string s5 = "cat";

    insert(root,s1);
    insert(root,s2);
    insert(root,s3);
    insert(root,s4);
    insert(root,s5);
    delKey(root,"zoo",0);

    cout<< (search(root,"geek") ? "Yes" : "No")<<endl;
    cout<< (search(root,"eek") ? "Yes" : "No")<<endl;
    cout<< (search(root,"zoo") ? "Yes" : "No")<<endl;

}
