#include <bits/stdc++.h>
using namespace std;
class Solution
{
   public:
   int numberOfPieces(int n,int a,int b,int c)
   {
       if(n<0) return -1;
       if(n==0) return 0;
       int res = max({numberOfPieces(n-a,a,b,c),numberOfPieces(n-b,a,b,c),numberOfPieces(n-c,a,b,c)});
       if(res == -1) return -1;
       return res+1;
   }
};
int main()
{
    Solution obj1;
    cout<<obj1.numberOfPieces(5,2,1,5);
}