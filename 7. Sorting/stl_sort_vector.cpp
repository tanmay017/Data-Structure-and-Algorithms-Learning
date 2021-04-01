#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void print(vector<int>& v)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Solution obj1;
    vector<int> v = {1,6,2,3,7,8,4,5,4,10};
    sort(v.begin(),v.end());
    obj1.print(v);
    sort(v.begin(),v.end(),greater<int>());
    obj1.print(v);
}