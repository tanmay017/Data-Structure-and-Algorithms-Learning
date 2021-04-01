#include <bits/stdc++.h> // Unacademy Important Question
using namespace std;

int sumOfAllSubMat(vector<vector<int>> &mat, int n, int m)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int topLeftCount = (i + 1) * (j + 1);
            int bottomRightCount = (n - i) * (m - j);
            res += mat[i][j] * topLeftCount * bottomRightCount;
        }
    }
    return res;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    cout << sumOfAllSubMat(mat, n, m);
}