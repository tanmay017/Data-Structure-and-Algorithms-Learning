#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int survivor(int n,int k)
    {
        if(n == 1) return 0;
        else return (survivor(n-1,k)+k)%n;
    }
};

int main()
{
    Solution obj1;
    cout<<obj1.survivor(5,3);
}