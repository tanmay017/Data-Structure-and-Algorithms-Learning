#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxItem(int arr[],int n,int sum)  //use vanilla heap implementation to remove aux space
    {
        priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n);
        int count = 0;
        while(sum-pq.top() >= 0)
        {
            sum -= pq.top();
            pq.pop();
            count++;
        }
        return count;
    }
};

int main()
{
    Solution obj;
    int arr[] = {1,12,5,3,1,111,200};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 10;
    cout<<obj.maxItem(arr,n,sum);
}