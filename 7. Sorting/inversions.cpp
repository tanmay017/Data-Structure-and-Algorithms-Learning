#include <bits/stdc++.h> //refer self paced dsa
using namespace std;
class Solution
{
public:
    int merge(int arr[], int l, int m, int r)
    {
        int res = 0;
        int n1 = m - l + 1;
        int n2 = r - m;
        int a[n1];
        int b[n2];
        for (int i = 0; i < n1; i++)
            a[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
            b[j] = arr[m + 1 + j];
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2)
        {
            if (a[i] <= b[j])
                arr[k++] = a[i++];
            else
            {
                arr[k++] = b[j++];
                res += n1 - i;
            }
        }
        while (i < n1)
            arr[k++] = a[i++];
        while (j < n2)
            arr[k++] = b[j++];
        return res;
    }
    int countInv(int arr[], int l, int r)
    {
        int res = 0;
        if (r > l)
        {
            int m = l + (r - l) / 2;
            res += countInv(arr, l, m);
            res += countInv(arr, m + 1, r);
            res += merge(arr, l, m, r);
        }
        return res;
    }
};
int main()
{
    Solution obj1;
    int arr[] = {2, 4, 1, 3, 5};
    cout << obj1.countInv(arr, 0, 4);
}