#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isSumPresent(int arr[], int n, int sum)
    {
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            if (s.find(sum - arr[i]) != s.end())
                return true;
            s.insert(arr[i]);
        }
        return false;
    }
};
int main()
{
    Solution obj1;
    int arr[] = {3, 2, 8, 15, -8};
    int n = sizeof(arr) / 4;
    if (obj1.isSumPresent(arr, n, 10))
        cout << "Yes";
    else
        cout << "No";
}