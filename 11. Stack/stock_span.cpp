#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void printSpan(int arr[], int n)
    {
        stack<int> s;
        s.push(0);
        cout << 1 << " ";
        for (int i = 1; i < n; i++)
        {
            while (!s.empty() && arr[s.top()] <= arr[i])
            {
                s.pop();
            }
            int span = s.empty() ? i + 1 : i - s.top();
            cout << span << " ";
            s.push(i);
        }
    }
};
int main()
{
    Solution obj;
    int arr[] = {60, 10, 20, 40, 35, 30, 50, 70, 65};
    int n = sizeof(arr) / sizeof(arr[0]);
    obj.printSpan(arr, n);
}