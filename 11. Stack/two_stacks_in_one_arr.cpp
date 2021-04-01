#include <bits/stdc++.h>
using namespace std;
class TwoStack
{
    int *arr, cap, top1, top2;

public:
    TwoStack(int c)
    {
        cap = c;
        top1 = -1;
        top2 = cap;
        arr = new int[c];
    }
    void push1(int x)
    {
        if (top1 < (top2 - 1))
        {
            top1++;
            arr[top1] = x;
        }
    }
    void push2(int x)
    {
        if (top1 < (top2 - 1))
        {
            top2--;
            arr[top2] = x;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int res = arr[top1];
            top1--;
            return res;
        }
        else
            exit(1);
    }
    int pop2()
    {
        if (top2 < cap)
        {
            int res = arr[top2];
            top2++;
            return res;
        }
        else
            exit(1);
    }
    int size1()
    {
        return (top1 + 1);
    }
    int size2()
    {
        return (cap - top2);
    }
    bool empty1()
    {
        return (top1 == -1);
    }
    bool empty2()
    {
        return (top2 == cap);
    }
    int peek1()
    {
        return (arr[top1]);
    }
    int peek2()
    {
        return (arr[top2]);
    }
};
int main()
{
    TwoStack s(10);
    s.push1(100);
    s.push1(90);
    cout << s.size1() << endl;
    cout << s.pop1() << endl;
    cout << s.size1() << endl;
    s.push2(67);
    s.push2(264);
    s.push2(168);
    cout << s.size2() << endl;
    s.push2(400);
    cout << s.pop2() << endl;
    cout << s.size2() << endl;
    return 0;
}