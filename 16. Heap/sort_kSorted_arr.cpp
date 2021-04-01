#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void kSort(int arr[],int n,int k)
    {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0;i <= k;i++)
            pq.push(arr[i]);
        int index = 0;
        for(int i = k+1;i < n;i++)
        {
            arr[index++] = pq.top();
            pq.pop();
            pq.push(arr[i]);
        }
        while(!pq.empty())
        {
            arr[index++] = pq.top();
            pq.pop();
        }
    }
    void printArr(int arr[],int n)
    {
        for(int i = 0;i < n;i++)
            cout<<arr[i]<<" ";
    }
};
int main()
{
    Solution obj;
    int arr[] = {9,8,7,19,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    obj.kSort(arr,n,k);
    obj.printArr(arr,n);
}