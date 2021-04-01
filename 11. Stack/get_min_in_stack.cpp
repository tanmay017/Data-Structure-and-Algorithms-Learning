#include <bits/stdc++.h> //both for positives and mixed positives and negatives in different functions
using namespace std;
class MyStack
{
public:
    stack<int> s;
    int min;
    //This is start of first method which only works for all +ve numbers
    int pop1()
    {
        int t = s.top();
        s.pop();
        if (t > 0)
            return t;
        else
        {
            int prev_min = min;
            min = min - t;
            return prev_min;
        }
    }
    void push1(int x)
    {
        if (s.empty())
        {
            min = x;
            s.push(x);
        }
        else if (x > min)
            s.push(x);
        else
        {
            s.push(x - min);
            min = x;
        }
    }
    int peek()
    {
        int t = s.top();
        return (t <= 0) ? min : t;
    }
    //This is start of second version of functions which work for mixed +ves and -ves with same
    //tweaked way
    int pop2()
    {
        int t = s.top();
        s.pop();
        if (t > 0)
            return t;
        else
        {
            int prev_min = min;
            min = (2 * min) - t;
            return prev_min;
        }
    }
    void push2(int x)
    {
        if (s.empty())
        {
            min = x;
            s.push(x);
        }
        else if (x > min)
            s.push(x);
        else
        {
            s.push((2 * x) - min);
            min = x;
        }
    }
    int peek2()
    {
        int t = s.top();
        return (t <= min) ? min : t;
    }
    int getMin()
    {
        return min;
    }
};
int main()
{
    MyStack s;
    s.push2(4);
    s.push2(5);
    s.push2(8);
    s.push2(1);
    s.pop2();

    cout << " Minimum Element from Stack: " << s.getMin();

    return 0;
}
