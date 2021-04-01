#include <bits/stdc++.h> //Condition : Given two arrays mut be sorted
using namespace std;
class Solution
{
    public:
    void mergeSort(int a[],int b[],int n,int m)
    {
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            if(a[i]<=b[j])
            {
                cout<<a[i]<<" ";
                i++;
            }
            else
            {
                cout<<b[j]<<" ";
                j++;
            }
        }
        while(i<n)
        {
            cout<<a[i]<<" ";
            i++;
        }
        while(j<m)
        {
            cout<<b[i]<<" ";
            j++;
        }
    }
};
int main()
{
    Solution obj1;
    int a[] = {2,6,7,8,19,28,30};
    int b[] = {5,10,15,20};
    int n = sizeof(a)/4;
    int m = sizeof(b)/4;
    obj1.mergeSort(a,b,n,m);
}