#include <bits/stdc++.h>
using namespace std;

void maxHeapify(int arr[],int n,int i)
{
    int largest = i;
    int left = (2*i) + 1;
    int right = (2*i) + 2;
    if(left < n && arr[largest] < arr[left])
        largest = left;
    if(right < n && arr[largest] < arr[right])
        largest = right;
    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        maxHeapify(arr,n,largest);
    }
}

void buildHeap(int arr[],int n)
{
    for(int i = (n-2)/2;i >= 0;i--)
        maxHeapify(arr,n,i);
}

void heapSort(int arr[],int n)
{
    buildHeap(arr,n);
    for(int i = n-1;i >= 1;i--)
    {
        swap(arr[0],arr[i]);
        maxHeapify(arr,i,0); //We pass i for size of arr
    }
}

void printArr(int arr[],int n)
{
    for(int i = 0;i < n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[] = {76,11,34,89,74,50,67,98};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr,n);
    printArr(arr,n);
}