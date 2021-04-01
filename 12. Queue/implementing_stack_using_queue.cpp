#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    queue<int> q1, q2;
    int pop()
    {
        int res = q1.front();
        q1.pop();
        return res;
    }
    int size()
    {
        return q1.size();
    }
    int top()
    {
        return q1.front();
    }
    void push(int x)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while (!q2.empty())
        {
            q1.push(q1.front());
            q2.pop();
        }
    }
};
int main()
{
    MyStack m;
    m.push(10);
    m.push(20);
    m.push(30);
    cout << m.pop();
}