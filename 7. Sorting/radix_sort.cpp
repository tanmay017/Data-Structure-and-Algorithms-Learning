#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rSort(int arr[], int n)
    {
        int maxi = arr[0];
        for (int i = 1; i < n; i++)
            maxi = max(arr[i], maxi);
        for (int exp = 1; (maxi / exp) > 0; exp = exp * 10)
            cSort(arr, n, exp);
    }
    void cSort(int arr[], int n, int exp)
    {
        int count[10];
        int output[n];
        for (int i = 0; i < 10; i++)
            count[i] = 0;
        for (int i = 0; i < n; i++)
            count[(arr[i] / exp) % 10]++;
        for (int i = 1; i < 10; i++)
            count[i] = count[i] + count[i - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }
        for (int i = 0; i < n; i++)
            arr[i] = output[i];
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
    int arr[] = {319, 212, 6, 8, 100, 50};
    int n = sizeof(arr) / 4;
    obj1.rSort(arr, n);
    obj1.printArr(arr, n);
}