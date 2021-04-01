#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void moreOcc(int arr[], int n, int k)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
            m[arr[i]]++;
        for (auto e : m)
            if (e.second > n / k)
                cout << e.first << " ";
    }
};
int main()
{
    Solution obj1;
    int arr[] = {10, 20, 30, 10, 10, 20};
    int n = sizeof(arr) / 4;
    int k = 3;
    obj1.moreOcc(arr, n, k);
}