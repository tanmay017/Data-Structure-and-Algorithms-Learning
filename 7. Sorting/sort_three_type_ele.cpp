#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sort(int arr[], int n)
    {
        int mid = 0;
        int low = 0;
        int high = n - 1;
        while (mid <= high)
        {
            switch (arr[mid])
            {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
            }
        }
    }
    void printArr(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
};
int main()
{
    Solution obj1;
    int arr[] = {2, 1, 0, 0, 2, 1, 0, 0, 1};
    int n = sizeof(arr) / 4;
    obj1.sort(arr, n);
    obj1.printArr(arr, n);
}