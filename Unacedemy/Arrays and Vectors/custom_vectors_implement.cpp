#include <bits/stdc++.h>
using namespace std;

template <typename T>
class vec
{
private:
    T *a;
    int size;
    int capacity;

public:
    vec()
    {
        size = 0;
        capacity = 0;
        a = NULL;
    }

    vec(int x)
    {
        size = 0;
        capacity = x;
        a = new T[x];
    }

    vec(int val, int x)
    {
        size = x;
        capacity = x;
        a = new T[x];
        for (int i = 0; i < x; i++)
            a[i] = val;
    }

    void resize(int x)
    {
        if (x < capacity)
            cout << "Size is greater than resizing size" << endl;
        else
        {
            T *temp = new T[x];
            for (int i = 0; i < size; i++)
                temp[i] = a[i];
            delete[] a;
            a = temp;
            capacity = x;
        }
    }

    void push_back(int val)
    {
        if (size + 1 > capacity)
            resize(2 * size);
        a[size] = val;
        size++;
    }

    void pop()
    {
        if (size <= 0)
            cout << "Size Underflow" << endl;
        else
            size--;
    }

    int operator[](int i)
    {
        if (i >= 0 && i < size)
            return a[i];
        else
            return -1;
    }

    int vec_size()
    {
        return size;
    }
    int vec_capacity()
    {
        return capacity;
    }

    int back()
    {
        if (size > 0)
            return a[size - 1];
        else
        {
            cout << "Vec is Empty";
            return -1;
        }
    }

    bool isEmpty()
    {
        return (size == 0 ? true : false);
    }

    void print()
    {
        if (size == 0)
            cout << "Vec Is Empty" << endl;
        for (int i = 0; i < size; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    void vec_sort()
    {
        sort(a, a + size);
    }

    T *vec_begin()
    {
        return a;
    }
    T *vec_end()
    {
        return (a + size);
    }

    T *vec_rbegin()
    {
        return (a + size - 1);
    }

    T *vec_rend()
    {
        return (a - 1);
    }
};

int main()
{
    vec<int> v(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(9);
    v.push_back(11);
    v.push_back(4);
    v.pop();
    cout << (v.isEmpty() ? "Yes, vec is empty" : "No, vec is not empty") << endl;
    cout << v.back() << endl;
    for (auto it = v.vec_begin(); it != v.vec_end(); it++)
        cout << *it << " ";
    cout << endl;
    v.vec_sort();
    v.print();
    vec<int> v1(10, 5);
    v1.print();
}
