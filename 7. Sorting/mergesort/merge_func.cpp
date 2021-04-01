#include <bits/stdc++.h> //This function is just to showcase Merge function of merge sort algo
using namespace std;
class Solution
{
    public:
    void merge(int arr[],int l,int m,int h)
    {
        int n1 = m-l+1;
        int n2 = h-m;
        int a[n1];
        int b[n2];
        for(int i=0;i<n1;i++) a[i] = arr[l+i];
        for(int i=0;i<n2;i++) b[i] = arr[m+1+i];
        int i=0,j=0,k=0;
        while(i<n1 && j<n2)
        {
            if(a[i]<=b[j]) arr[k++] = a[i++];
            else arr[k++] = b[j++];
        }
        while(i<n1) arr[k++] = a[i++];     
        while(j<n2) arr[k++] = b[j++];
    }
    void printArr(int arr[],int n)
    {
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    Solution obj1;
    int arr[] = {2,10,15,33,3,4,5,11,22};
    obj1.merge(arr,0,3,8);
    obj1.printArr(arr,9);
}