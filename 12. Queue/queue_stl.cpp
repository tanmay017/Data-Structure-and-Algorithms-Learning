#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << "Front Element is : " << q.front() << endl;
    cout << "Size of Queue is : " << q.size() << endl;
    q.pop();
    q.pop();
    cout << "Front Element is : " << q.front() << endl;
    cout << "End Element is : " << q.back() << endl;
    cout << "Is Element empty : " << q.empty() << endl;
    cout << "Size of Queue is : " << q.size() << endl;
    return 0;
}