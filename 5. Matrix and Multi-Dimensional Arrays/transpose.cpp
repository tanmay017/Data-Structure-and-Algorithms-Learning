#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void transpose(vector<vector<int>>& mat)
    {
        for(int i=0;i<mat.size();i++)
          for(int j=i+1;j<mat[i].size();j++)
             swap(mat[i][j],mat[j][i]);
    }
    void printMat(vector<vector<int>>& mat)
    {
        for(int i=0;i<mat.size();i++)
          for(int j=0;j<mat[0].size();j++)
            cout<<mat[i][j]<<" ";
    }
};

int main()
{
    Solution obj1;
    vector<vector<int>> mat = {{1,2,3,4}, 
                               {5,6,7,8}, 
                               {9,10,11,12}, 
                               {13,14,15,16}};
    obj1.transpose(mat);
    obj1.printMat(mat);
}