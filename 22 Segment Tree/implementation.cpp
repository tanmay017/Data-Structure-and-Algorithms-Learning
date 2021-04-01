#include <bits/stdc++.h>
using namespace std;

int constructST(int ss,int se,int si,int arr[],int tree[])
{
    if(ss == se)
    {
        tree[si] = arr[ss];
        return arr[ss];
    }
    int mid = (ss+se)/2;
    tree[si] = constructST(ss,mid,2*si+1,arr,tree) + constructST(mid+1,se,2*si+2,arr,tree);
    return tree[si];
}

void printTree(int tree[],int n)
{
    for(int i = 0;i < n;i++)
        if(tree[i] != NULL)
            cout<<tree[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int size_tree = 4*n;
    int tree[size_tree];
    memset(tree,NULL,sizeof(tree));
    cout<<constructST(0,n-1,0,arr,tree)<<endl;
    printTree(tree,size_tree);
}