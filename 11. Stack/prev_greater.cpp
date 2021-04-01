#include <bits/stdc++.h> //find prev greater (position wise closest on left side)
using namespace std;
class Solution
{
public:
    void printPrevGreater(int arr[], int n)
    {
        stack<int> s;
        s.push(arr[0]);
        cout << -1 << " ";
        for (int i = 1; i < n; i++)
        {
            while (!s.empty() && s.top() <= arr[i])
                s.pop();
            int res = s.empty() ? -1 : s.top();
            s.push(arr[i]);
            cout << res << " ";
        }
    }
};
int main()
{
    Solution obj1;
    int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    obj1.printPrevGreater(arr, n);
}