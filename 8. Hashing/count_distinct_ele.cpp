#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countDisEle(int arr[], int n)
    {
        unordered_set<int> s(arr, arr + n);
        return s.size();
    }
};
int main()
{
    Solution obj1;
    int arr[] = {5, 2, 7, 8, 10, 5, 9, 5, 5, 2, 7, 10, 11};
    int n = sizeof(arr) / 4;
    cout << "Numbers of Distinct element are : " << obj1.countDisEle(arr, n);
}