#include <bits/stdc++.h> //it can be asked in the form of segregate -ve and +ve or odd and even from as well.
using namespace std;
class Solution
{
public:
    void sortArr(int arr[], int n)
    {
        int i = -1;
        int j = n;
        while (true)
        {
            do
            {
                i++;
            } while (arr[i] == 0);
            do
            {
                j--;
            } while (arr[j] == 1);
            if (i >= j)
                return;
            swap(arr[i], arr[j]);
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
    int arr[] = {0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1};
    int n = sizeof(arr) / 4;
    obj1.sortArr(arr, n);
    obj1.printArr(arr, n);
}