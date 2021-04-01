#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int repeatingELe(int arr[],int n)
    {
        int slow = arr[0];
        int fast = arr[0];
        do
        {
            slow = arr[slow];
            fast = arr[arr[fast]];
        } while (slow!=fast);
        slow = arr[0];
        while(slow!=fast)
        {
            slow = arr[slow];
            fast = arr[fast];
        }
        return slow;
    }
};
int main()
{
    Solution obj1;
    int arr[] = {1,5,3,2,6,4,8,7,4};
    int n = sizeof(arr)/4;
    cout<<obj1.repeatingELe(arr,n);
}