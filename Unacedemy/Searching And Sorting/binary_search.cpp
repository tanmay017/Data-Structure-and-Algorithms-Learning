#include <bits/stdc++.h>
using namespace std;

bool binarySearchItr(vector<int> &arr, int l, int r, int target)
{
    int high = r;
    int low = l;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return true;
        else if (target < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
}

bool binarySearchRec(vector<int> &arr, int l, int r, int target)
{
    if (target < arr[l])
        return false;
    if (target > arr[r])
        return false;
    int mid = l + (r - l) / 2;
    if (arr[mid] == target)
        return true;
    else
        return (binarySearchRec(arr, l, mid - 1, target) || binarySearchRec(arr, mid + 1, r, target));
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int target;
    cout << "Enter Target : ";
    cin >> target;
    // cout << (binarySearchRec(arr, 0, n - 1, target) ? "YES" : "NO");
    cout << (binarySearchItr(arr, 0, n - 1, target) ? "YES" : "NO");
}