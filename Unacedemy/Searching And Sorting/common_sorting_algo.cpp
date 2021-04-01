#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) // It fixes the position
{
    for (int i = 0; i < n; i++)
    {
        int minIdx = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[minIdx], arr[i]);
    }
}

void bubbleSort(int arr[], int n) // It fixes the alternate ordering
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void insertionSort(int arr[], int n) // It Fixes the elements
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr1[] = {10, -1, 0, -13, 9, -5};
    int arr2[] = {11, 12, 13, 9, 10, 1};
    int arr3[] = {-1, 10, -2, 9, -1, 0};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    selectionSort(arr1, n1);
    bubbleSort(arr2, n2);
    insertionSort(arr3, n3);
    printArr(arr1, n1);
    printArr(arr2, n2);
    printArr(arr3, n3);
}