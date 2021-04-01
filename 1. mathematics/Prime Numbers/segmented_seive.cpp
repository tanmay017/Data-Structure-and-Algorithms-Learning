#include <bits/stdc++.h>
using namespace std;

void seive(int n, vector<int> &prime)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            prime.emplace_back(i);
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
}

void segmented_seive(int l, int h)
{
    int sl = sqrt(h);
    vector<int> prime;
    seive(sl, prime);
    vector<bool> isPrime(h - l + 1, true);
    for (int p : prime)
    {
        int sm = (l / p) * p;
        if (sm < l)
            sm += p;
        for (int m = sm; m <= h; m += p)
            isPrime[m - l] = false;
    }
    for (int i = l; i <= h; i++)
        if (isPrime[i - l])
            cout << i << " ";
}
int main()
{
    int l = 11;
    int h = 41;
    segmented_seive(l, h);
}
