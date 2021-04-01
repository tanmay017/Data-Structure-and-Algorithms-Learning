#include <bits/stdc++.h> //hard to guess,important to learn problem refer self paced DSA
using namespace std;     //Uses largest histogram function from last problem
#define R 4
#define C 4
class Solution
{
public:
    int largestHist(int arr[], int n)
    {
        stack<int> s;
        int res = 0;
        int curr;
        int tp;
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && arr[s.top()] >= arr[i])
            {
                tp = s.top();
                s.pop();
                curr = arr[tp] * (s.empty() ? i : i - s.top() - 1);
                res = max(res, curr);
            }
            s.push(i);
        }
        while (!s.empty())
        {
            tp = s.top();
            s.pop();
            curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
            res = max(res, curr);
        }
        return res;
    }
    int maxRectangle(int mat[][C])
    {
        int res = largestHist(mat[0], C);
        for (int i = 1; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                if (mat[i][j] == 1)
                    mat[i][j] += mat[i - 1][j];
            }
            res = max(res, largestHist(mat[i], C));
        }
        return res;
    }
};

int main()
{
    Solution obj;
    int mat[][C] = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0},
    };
    cout << "Area of Maximum Rectangle is : " << obj.maxRectangle(mat);
}