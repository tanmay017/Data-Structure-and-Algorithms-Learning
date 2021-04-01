#include <bits/stdc++.h> //There is a better solution O(logN)
using namespace std;

int fib(int n,int memo[])
{
    if(memo[n] == -1)
    {
        int res;
        if(n == 0 || n == 1)
        res = n;
    else
        res = fib(n-1,memo) + fib(n-2,memo);
    memo[n] = res;
    }
    return memo[n];
}
int fib_utitlity(int n)
{
    int memo[n+1];
    fill(memo,memo+n+1,-1);
    return fib(n,memo);
}
int main()
{
    cout<<"Fibonacci number for 7 is : "<<fib_utitlity(7);
}