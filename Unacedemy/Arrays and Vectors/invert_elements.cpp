/*  Given An boolean Array and Q queries having left and right indexes invert every element from right to left and output final array
    after all queries */

#include <bits/stdc++.h>
using namespace std;

void invertElements_arrDiff(bool arr[], int n) // array difference method
{
    int temp[n];
    memset(temp, 0, sizeof(temp));
    int q;
    cout << "Enter the number of Queries : ";
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        temp[l] += 1;
        if (r < n - 1)
            temp[r + 1] -= 1;
    }
    for (int i = 1; i < n; i++)
        temp[i] = temp[i] + temp[i - 1];
    for (int i = 0; i < n; i++)
        temp[i] % 2 == 0 ? arr[i] = arr[i] : arr[i] ^= 1;
}
void invertElements_preXOR(bool arr[], int n) // prefix XOR method
{
    bool temp[n];
    memset(temp, 0, sizeof(temp));
    int q;
    cout << "Enter the number of Queries : ";
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        temp[l] ^= 1;
        if (r < n - 1)
            temp[r + 1] ^= 1;
    }
    for (int i = 1; i < n; i++)
        temp[i] ^= temp[i - 1];
    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
    for (int i = 0; i < n; i++)
        temp[i] == 0 ? arr[i] = arr[i] : arr[i] ^= 1;
}
void printArr(bool arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n;
    cin >> n;
    bool arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    invertElements_arrDiff(arr, n);
    printArr(arr, n);
}