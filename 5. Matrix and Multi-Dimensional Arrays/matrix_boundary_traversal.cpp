#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void printBoundary(vector<vector<int>>& mat)
    {
        if(mat.size()==1)
        {
            for(int i=0;i<mat[0].size();i++)
                cout<<mat[0][i]<<" ";           
        }
        else if(mat[0].size()==1)
        {
            for(int i=0;i<mat.size();i++)
               cout<<mat[i][0]<<" ";
        }
        else
        {
            int i=0,j=0;
            for(j=0;j<mat[0].size();j++)
              cout<<mat[i][j]<<" ";
            j=mat[0].size()-1;
            for(i=1;i<mat.size();i++)
              cout<<mat[i][j]<<" ";
            i=mat.size()-1;
            for(j=mat[0].size()-2;j>=0;j--)
               cout<<mat[i][j]<<" ";
            j=0;
            for(i=mat.size()-2;i>0;i--)
              cout<<mat[i][j]<<" ";
        }
    }
};

int main()
{
    Solution obj1;
    vector<vector<int>> mat = {{1,2,3,4}};
    obj1.printBoundary(mat);
    return 0;
}