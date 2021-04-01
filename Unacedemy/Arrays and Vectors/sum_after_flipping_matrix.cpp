/* You have a binary 2D array. You can perform one operations on the rows or the columns.

Operation :
flip the values i.e . make 0 → 1 or 1 -> 0.
You can perform the above operation multiple times .At the last ,treat each row as a complete binary no .
convert it to decimal & sum it up - find the maximum sum possible
*/
#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<vector<int>> &binArr)
{
    int n = binArr.size();
    int m = binArr[0].size();
    int sum = (1 << (m - 1)) * n;
    for (int j = 1; j < m; j++)
    {
        int sameBit = 0;
        for (int i = 0; i < n; i++)
            if (binArr[i][0] == binArr[i][j])
                sameBit++;
        sum += (1 << (m - j - 1)) * max(sameBit, n - sameBit);
    }
    return sum;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> binArr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> binArr[i][j];
    cout << maxSum(binArr);
}