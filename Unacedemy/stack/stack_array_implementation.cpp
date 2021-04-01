#include <bits/stdc++.h>
using namespace std;

template <typename T>
class MyStack
{
    int size;
    T *arr;
    int capacity;

public:
    MyStack(int s)
    {
        size = 0;
        capacity = s;
        arr = new T[s];
    }

    void push(T x)
    {
        if (size == capacity)
            cout << "Stack Overflow" << endl;
        else
            arr[size++] = x;
    }

    T pop()
    {
        if (size == 0)
        {
            cout << "Stack Underflow" << endl;
            return T();
        }
        else
            return arr[--size];
    }

    bool isEmpty()
    {
        return size == 0;
    }

    T top()
    {
        if (size == 0)
        {
            cout << "Stack Underflow" << endl;
            return T();
        }
        else
            return arr[size - 1];
    }

    int cap()
    {
        return capacity;
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    MyStack<char> s(10);
    s.push('a');
    s.push('b');
    s.push('c');
    cout << s.getSize() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
}