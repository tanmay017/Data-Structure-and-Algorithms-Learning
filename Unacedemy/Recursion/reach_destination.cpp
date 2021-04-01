/* You are given a matrix your start point top left corner and destination is right bottom corner ,we can go either right or down
   print the path and count number of moves*/

#include <bits/stdc++.h>
using namespace std;

void calcPaths(int i, int j, int m, int n, int &pathCount, string osf = "")
{
    if (i == m - 1 and j == n - 1)
    {
        pathCount++;
        cout << osf << endl;
        return;
    }
    if (i >= m or j >= n)
        return;
    calcPaths(i, j + 1, m, n, pathCount, osf + 'R');
    calcPaths(i + 1, j, m, n, pathCount, osf + 'D');
}
int main()
{
    int n, m;
    cin >> n >> m;
    int pathCount = 0;
    calcPaths(0, 0, m, n, pathCount);
    cout << "Number of paths are : " << pathCount;
}
