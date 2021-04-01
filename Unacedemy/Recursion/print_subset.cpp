#include <bits/stdc++.h>
using namespace std;

void printSub(vector<int> arr, int i, int size, string osf = "") // osf stands for output so far
{
    if (i == size)
    {
        cout << "[" << osf << "]" << endl;
        return; // Try by removing this
    }
    printSub(arr, i + 1, size, osf + to_string(arr[i]) + ",");
    printSub(arr, i + 1, size, osf);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    printSub(arr, 0, arr.size());
}