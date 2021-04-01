#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void insertionSort(int arr[],int n)
    {
        for(int i=1;i<n;i++)
        {
            int key = arr[i];
            int j = i-1;
            while(j>=0 && key<arr[j])
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }
    void printArr(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Solution obj1;
    int arr[] = {50,20,40,60,10,30};
    int n = sizeof(arr)/4;
    obj1.insertionSort(arr,n);
    obj1.printArr(arr,n);
}