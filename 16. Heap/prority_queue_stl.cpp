#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> pq; //it creates max heap by default
    // pq.push(15);
    // pq.push(5);
    // pq.push(20);
    // pq.push(10);
    // pq.push(43);
    // cout<<pq.size()<<endl;
    // while(pq.empty() == false)
    // {
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }
    // cout<<endl;

    // priority_queue<int,vector<int>,greater<int>> pq1; //This is to make min heap
    // pq1.push(15);
    // pq1.push(5);
    // pq1.push(20);
    // pq1.push(10);
    // pq1.push(43);
    // pq1.push(11);
    // cout<<pq1.top()<<endl;
    // cout<<pq1.size()<<endl;

    /*Creating Priority queues with existing arrays or vectors*/
    int arr[] = {10,20,5,15,90};
    priority_queue<int> pq(arr,arr+5);
    while(pq.empty() == false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}