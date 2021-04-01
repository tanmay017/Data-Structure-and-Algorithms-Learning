#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool isPresent(vector<vector<int>>& mat,int x)
    {
        int j = mat[0].size()-1;
        int i = 0;
        while(i<mat.size() && j>= 0)
        {
            if(mat[i][j] == x) return true;
            else if(mat[i][j] > x) j--;
            else i++;
        }
        return false;
    }
};

int main()
{
    Solution obj1;
    vector<vector<int>> mat = {{10,20,30,40},
                               {15,25,35,45},
                               {27,29,37,48},
                               {32,33,39,50}};
    if(obj1.isPresent(mat,29)) cout<<"yes";
    else cout<<"no";
}