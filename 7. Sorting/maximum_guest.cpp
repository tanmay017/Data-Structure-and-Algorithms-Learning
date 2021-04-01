#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxGuest(int arr[], int dep[], int n)
    {
        int i = 1;
        int j = 0;
        int curr = 1;
        int res = 1;
        while (i < n && j < n)
        {
            if (arr[i] <= dep[j])
            {
                curr++;
                i++;
            }
            else
            {
                curr--;
                j++;
            }
            res = max(res, curr);
        }
        return res;
    }
};
int main()
{
    Solution obj1;
    int arr[] = {500, 600, 700, 800};
    int dep[] = {530, 830, 820, 840};
    int n = sizeof(arr) / 4;
    cout << "Maximum number of guest is : " << obj1.maxGuest(arr, dep, n);
}