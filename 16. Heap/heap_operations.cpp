#include <bits/stdc++.h>
using namespace std;
class Heap
{
    int *arr;
    int capacity;
    int size;

public:
    Heap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int parent(int i) { return (i - 1) / 2; }
    int left(int i) { return (2 * i) + 1; }
    int right(int i) { return (2 * i) + 2; }

    void insert(int x)
    {
        if (size == capacity)
            return;
        size++;
        arr[size - 1] = x;
        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[parent(i)], arr[i]);
            i = parent(i);
        }
    }

    void printArr()
    {
        for(int i = 0;i < size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

    void minHeapify(int i = 0)
    {
        int lt = left(i);
        int rt = right(i);
        int smallest = i;
        if(lt < size && arr[lt] < arr[i])
            smallest = lt;
        if(rt < size && arr[rt] < arr[i])
            smallest = rt;
        if(smallest != i)
        {
            swap(arr[i],arr[smallest]);
            minHeapify(smallest);
        }
    }

    int extractMin()
    {
        if(size == 0) return INT_MAX;
        if(size == 1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        minHeapify(0);
        return arr[size];
    }

    void decreaseKey(int i,int x)
    {
        arr[i] = x;
        while(i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i],arr[parent(i)]);
            i = parent(i);
        }
    }

    void deleteKey(int i)
    {
        decreaseKey(i,INT_MIN);
        extractMin();
    }

    void buildHeap()
    {
        for(int i = (size-2)/2;i >= 0;i--)
            minHeapify(i);
    }
};

int main()
{
    Heap h(11);
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(5);
    h.insert(15);
    h.insert(4);
    h.insert(13);
    h.insert(25);
    h.printArr();
    h.minHeapify();
    cout<<h.extractMin() <<endl;
    h.printArr();
    h.decreaseKey(2,3);
    h.printArr();
    h.deleteKey(3);
    h.buildHeap();
    h.printArr();
}