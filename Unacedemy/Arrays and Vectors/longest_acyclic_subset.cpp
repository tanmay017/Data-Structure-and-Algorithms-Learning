#include <bits/stdc++.h>
using namespace std;

int longest_subset(vector<int> &arr)
{
    int res = 0; // keeps track of longest subset
    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];
        int count = 0;
        int prev = 0; // with help of this we mark elements
        while (curr != INT_MIN)
        {
            count++;
            arr[prev] = INT_MIN; // this is use to mark the visited variable
            prev = curr;
            curr = arr[curr];
        }
        res = max(res, count);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << longest_subset(arr);
}