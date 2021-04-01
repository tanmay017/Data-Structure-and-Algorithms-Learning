#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void printKLar(int arr[],int n,int k)
    {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0;i < k;i++)
            pq.push(arr[i]);
        for(int i = k;i < n;i++)
        {
            if(arr[i] > pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        while(!pq.empty())
        {
            cout<<pq.top()<<" ";
            pq.pop();
        }
    }
};

int main()
{
    Solution obj;
    int arr[] = {10,90,50,70,60,40,80,50,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    obj.printKLar(arr,n,k);
}