#include <bits/stdc++.h> //There is better solution O(logN)
using namespace std;

int fib(int n)
{
    int fib[n+1];
    fib[0] = 0;fib[1] = 1;
    for(int i = 2;i <= n;i++)
        fib[i] = fib[i-1] + fib[i-2];
    return fib[n];
}
int main()
{
    cout<<"Fibonacci number for 7 : "<<fib(7);
}