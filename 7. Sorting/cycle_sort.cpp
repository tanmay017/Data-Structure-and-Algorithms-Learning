#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void printArr(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
    void cSort(int arr[], int n)
    {
        for (int cs = 0; cs < n - 1; cs++)
        {
            int item = arr[cs];
            int pos = cs;
            for (int i = cs + 1; i < n; i++)
            {
                if (arr[i] < item)
                    pos++;
            }
            swap(item, arr[pos]);
            while (pos != cs)
            {
                pos = cs;
                for (int i = cs + 1; i < n; i++)
                {
                    if (arr[i] < item)
                        pos++;
                }
                swap(item, arr[pos]);
            }
        }
    }
};
int main()
{
    Solution obj1;
    int arr[] = {20, 40, 50, 30, 10, 30};
    int n = sizeof(arr) / 4;
    obj1.cSort(arr, n);
    obj1.printArr(arr, n);
}