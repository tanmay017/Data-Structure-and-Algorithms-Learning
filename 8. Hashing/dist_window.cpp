#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void countDist(int arr[], int n, int k)
    {
        unordered_map<int, int> s;
        int i;
        for (i = 0; i < k; i++)
            s[arr[i]]++;
        cout << s.size() << " ";
        for (int i = k; i < n; i++)
        {
            s[arr[i - k]]--;
            if (s[arr[i - k]] == 0)
                s.erase(arr[i - k]);
            s[arr[i]]++;
            cout << s.size() << " ";
        }
    }
};
int main()
{
    Solution obj1;
    int arr[] = {10, 20, 10, 10, 30, 40};
    int n = sizeof(arr) / 4;
    int k = 4;
    obj1.countDist(arr, n, k);
}