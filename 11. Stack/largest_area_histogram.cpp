#include <bits/stdc++.h> //it has two more solutions but this is best
using namespace std;     //Other two Solution take O(n^2) and O(n) time. O(n) one required
                         //3 linear traversals and 2 auxilary stack spaces
class Solution           //need to revise
{
public:
    int greatestAr(int arr[], int n)
    {
        stack<int> s;
        int res = 0;
        int curr;
        int tp;
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && arr[s.top()] >= arr[i])
            {
                tp = s.top();
                s.pop();
                curr = arr[tp] * (s.empty() ? i : i - s.top() - 1);
                res = max(res, curr);
            }
            s.push(i);
        }
        while (s.empty() == false)
        {
            tp = s.top();
            s.pop();
            curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
            res = max(res, curr);
        }
        return res;
    }
};

int main()
{
    Solution obj;
    int arr[] = {6, 2, 5, 4, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << obj.greatestAr(arr, n);
}