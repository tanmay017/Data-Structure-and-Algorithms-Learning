#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void snakePrint(vector<vector<int>>& mat)
    {
        for(int i=0;i<mat.size();i++)
        {
            if(i%2==0)
              for(int j=0;j<mat[0].size();j++)
                cout<<mat[i][j]<<" ";
            else
              for(int j=mat[0].size()-1;j>=0;j--)
                cout<<mat[i][j]<<" ";
        }
    }
};

int main()
{
    Solution obj1;
    vector<vector<int>> mat = {{1,2,3,4},
                               {5,6,7,8},
                               {9,10,11,12},
                               {13,14,15,16}};
    obj1.snakePrint(mat);
}