#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void printFreq(int arr[], int n)
    {
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
            freq[arr[i]]++;
        for (auto e : freq)
            cout << e.first << " " << e.second << "\n";
    }
};
int main()
{
    Solution obj1;
    int arr[] = {20, 30, 15, 20, 20, 30, 45, 50, 60, 45, 20, 30};
    int n = sizeof(arr) / 4;
    obj1.printFreq(arr, n);
}