#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void bSort(int arr[], int n, int k)
    {
        int maxi = arr[0];
        for (int i = 1; i < n; i++)
            maxi = max(maxi, arr[i]);
        maxi++;
        vector<int> bkt[k];
        for (int i = 0; i < n; i++)
        {
            int bi = (k * arr[i]) / maxi;
            bkt[bi].push_back(arr[i]);
        }
        for (int i = 0; i < k; i++)
            sort(bkt[i].begin(), bkt[i].end());
        int index = 0;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < bkt[i].size(); j++)
            {
                arr[index++] = bkt[i][j];
            }
        }
    }
    void printArr(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
};
int main()
{
    Solution obj1;
    int arr[] = {30, 40, 10, 80, 5, 12, 70};
    int n = sizeof(arr) / 4;
    obj1.bSort(arr, n, 4);
    obj1.printArr(arr, n);
}