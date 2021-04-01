#include <bits/stdc++.h>
using namespace std;
class KStacks
{
    int *arr, *top, *next, freetop, cap, kfreetop;

public:
    KStacks(int c, int k)
    {
        cap = c;
        arr = new int[cap];
        next = new int[cap];
        top = new int[k];
        freetop = 0;
        for (int i = 0; i < k; i++)
            top[i] = -1;
        for (int i = 0; i < cap; i++)
            next[i] = i + 1;
        next[cap - 1] = -1;
    }
    void push(int x, int sn)
    {
        int i = freetop;
        freetop = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = x;
    }
    int pop(int sn)
    {
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freetop;
        freetop = i;
        return arr[i];
    }
};

int main()
{
    int k = 3, n = 10;
    KStacks ks(n, k);
    ks.push(15, 2);
    ks.push(45, 2);
    ks.push(17, 1);
    ks.push(49, 1);
    ks.push(39, 1);
    ks.push(11, 0);
    ks.push(9, 0);
    ks.push(7, 0);
    cout << "Popped element from stack 2 is " << ks.pop(2) << endl;
    cout << "Popped element from stack 1 is " << ks.pop(1) << endl;
    cout << "Popped element from stack 0 is " << ks.pop(0) << endl;
    return 0;
}