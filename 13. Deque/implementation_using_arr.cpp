#include <bits/stdc++.h> //refer self DSA
using namespace std;
class Deque
{
    int *arr;
    int cap, size, front;

public:
    Deque(int c)
    {
        cap = c;
        arr = new int[cap];
        front = 0;
        size = 0;
    }
    void insertRear(int x)
    {
        if (size == cap)
            return;
        int new_rear = (front + size) % cap; //focus
        arr[new_rear] = x;
        size++;
    }
    void insertFront(int x)
    {
        if (size == cap)
            return;
        front = (front - 1 + cap) % cap; //focus
        arr[front] = x;
        size++;
    }
    void delRear()
    {
        if (size == 0)
            return;
        size--;
    }
    void delFront()
    {
        if (size == 0)
            return;
        front = (front + 1) % cap; //focus
        size--;
    }
    int getFront()
    {
        if (size == 0)
            return INT_MIN;
        return arr[front];
    }
    int getRear()
    {
        if (size == 0)
            return INT_MIN;
        return arr[(front + size - 1) % cap]; //focus
    }
};
int main()
{
    Deque d(6);
    d.insertRear(4);
    d.insertFront(10);
    d.insertFront(12);
    d.insertRear(6);
    cout << d.getRear() << endl;
    cout << d.getFront() << endl;
    d.delFront();
    d.delRear();
    cout << d.getFront() << endl;
    cout << d.getRear() << endl;
}