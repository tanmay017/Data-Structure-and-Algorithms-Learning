#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void printKClosest(int arr[],int n,int k,int x)
    {
        priority_queue<pair<int,int>> pq;
        for(int i = 0;i < k;i++)
            pq.push({abs(arr[i]-x),i});
        for(int i = k;i < n;i++)
        {
            int diff = abs(arr[i]-x);
            if(pq.top().first > diff)
            {
                pq.pop();
                pq.push({diff,i});
            }
        }
        while(!pq.empty())
        {
            cout<<arr[pq.top().second]<<" ";
            pq.pop();
        }
    }
};
int main()
{
    Solution obj;
    int arr[] = {10,9,7,15,20,1,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 8;
    int k = 3;
    obj.printKClosest(arr,n,k,x);
}