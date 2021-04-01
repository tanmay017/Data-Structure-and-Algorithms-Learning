#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // stores the size of vector
    cin >> n;
    vector<int> arr(n, 0); // creates a vector of size n and initializes every value to 0;
    int q;                 // stores the number of queries;
    cin >> q;

    while (q--)
    {
        int l, r; //left index and right index
        cin >> l >> r;
        arr[l] += 1;
        arr[r + 1] -= 1;
    }

    for (int i = 1; i < n; i++)
        arr[i] = arr[i] + arr[i - 1]; //prefix-sum

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}