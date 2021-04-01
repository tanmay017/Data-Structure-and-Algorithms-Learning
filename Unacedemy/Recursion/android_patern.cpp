#include <bits/stdc++.h>
using namespace std;

int skip[10][10];
int helper(vector<bool> &visited, int currDigit, int remainingDigits)
{
    if (remainingDigits == 0)
        return 1;
    visited[currDigit] = true;
    int res = 0;
    for (int i = 1; i <= 9; i++)
    {
        if (!visited[i] && (skip[currDigit][i] == 0 || visited[(skip[currDigit][i])]))
            res += helper(visited, i, remainingDigits - 1);
    }
    visited[currDigit] = false;
    return res;
}
int numberOfPatterns(int m, int n)
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            skip[i][j] = 0;
    skip[1][9] = skip[9][1] = skip[8][2] = skip[2][8] = skip[3][7] = skip[7][3] = skip[6][4] = skip[4][6] = 5;
    skip[1][3] = skip[3][1] = 2;
    skip[1][7] = skip[7][1] = 4;
    skip[9][3] = skip[3][9] = 6;
    skip[9][7] = skip[7][9] = 8;
    vector<bool> visited(10, false);
    int res = 0;
    for (int i = m; i <= n; i++)
        for (int j = 1; j <= 9; j++)
            res += helper(visited, j, i - 1);
    return res;
}
void printSkip(int skip[10][10], int n = 10, int m = 10)
{
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++)
            cout << skip[i][j];
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << numberOfPatterns(m, n);
}