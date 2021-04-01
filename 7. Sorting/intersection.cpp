#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void intersection(int a[],int b[],int n1,int n2)
    {
        int i=0,j=0;
        while(i<n1 && j<n2)
        {
            if(i>0 && a[i-1]==a[i])
            {
                i++;
                continue;
            }
            if(a[i] == b[j])
            {
                cout<<a[i]<<" ";
                i++;j++;
            }
            else if(a[i]<b[j]) i++;
            else j++;
        }
    }
};
int main()
{
    Solution obj1;
    int a[] = {3,5,10,10,10,15,15,20};
    int b[] = {5,10,10,15,30};
    int n1 = sizeof(a)/4;
    int n2 = sizeof(b)/4;
    obj1.intersection(a,b,n1,n2);
}