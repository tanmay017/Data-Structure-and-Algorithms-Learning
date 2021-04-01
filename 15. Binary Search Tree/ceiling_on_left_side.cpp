#include <bits/stdc++.h> //Use of lower_bound
using namespace std;
class Solution
{
public:
    void printCeiling(int arr[], int n)
    {
        set<int> s;
        s.insert(arr[0]);
        cout << -1 << " ";
        for (int i = 1; i < n; i++)
        {
            if (s.lower_bound(arr[i]) != s.end())
                cout << *s.lower_bound(arr[i]) << " ";
            else
                cout << -1 << " ";
            s.insert(arr[i]);
        }
    }
};
int main()
{
    Solution obj;
    int arr[] = {2, 8, 30, 15, 25, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    obj.printCeiling(arr, n);
}