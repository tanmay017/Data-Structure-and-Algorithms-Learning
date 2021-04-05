#include <bits/stdc++.h> // Google Problem // Correct Solution
using namespace std;

bool valid(int x, int y, int n, int m, vector<vector<int>> &visited)
{
    return x >= 0 && x < n && y >= 0 && y < m && visited[x][y] == -1;
}
int main()
{
    int n, m;
    cout << "Enter the length of rows and columns : ";
    cin >> n >> m;
    vector<vector<int>> city(n, vector<int>(m));
    cout << "Enter the population of each city : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> city[i][j];
        }
    }
    pair<int, int> fire;
    pair<int, int> fireStation;
    cout << "Enter the coordinates of fire : ";
    cin >> fire.first >> fire.second;
    cout << "Enter the coordinates of fire station : ";
    cin >> fireStation.first >> fireStation.second;
    vector<vector<int>> visitedFire(n, vector<int>(m, -1)); // creates an 2d array of size n * m and all values are equal to -1
    vector<vector<int>> visitedFireWorkers(n, vector<int>(m, -1));
    queue<pair<pair<int, int>, int>> q;

    //calculating distance from fire
    q.push({{fire.first, fire.second}, 0});
    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int t = q.front().second;
        q.pop();
        visitedFire[x][y] = t;
        if (valid(x + 1, y, n, m, visitedFire))
            q.push({{x + 1, y}, t + 1});
        if (valid(x, y + 1, n, m, visitedFire))
            q.push({{x, y + 1}, t + 1});
        if (valid(x - 1, y, n, m, visitedFire))
            q.push({{x - 1, y}, t + 1});
        if (valid(x, y - 1, n, m, visitedFire))
            q.push({{x, y - 1}, t + 1});
    }

    //calculating distance from fire station
    q.push({{fireStation.first, fireStation.second}, 0});
    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int t = q.front().second;
        q.pop();
        visitedFireWorkers[x][y] = t;
        if (valid(x + 1, y, n, m, visitedFireWorkers))
            q.push({{x + 1, y}, t + 1});
        if (valid(x, y + 1, n, m, visitedFireWorkers))
            q.push({{x, y + 1}, t + 1});
        if (valid(x - 1, y, n, m, visitedFireWorkers))
            q.push({{x - 1, y}, t + 1});
        if (valid(x, y - 1, n, m, visitedFireWorkers))
            q.push({{x, y - 1}, t + 1});
    }

    int peopleSaved = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visitedFireWorkers[i][j] <= visitedFire[i][j])
                peopleSaved += city[i][j];
        }
    }
    cout << "People Saved are : " << peopleSaved << endl;
}