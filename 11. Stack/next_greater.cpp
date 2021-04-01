#include <bits/stdc++.h> //find next greater(position wise closest on right side)
using namespace std;
class Solution
{
public:
    void printNextGret(int arr[], int n)
    {
        stack<int> s;
        s.push(arr[n - 1]);
        cout << -1 << " ";
        for (int i = n - 2; i >= 0; i--)
        {
            while (!s.empty() && s.top() <= arr[i])
                s.pop();
            int res = s.empty() ? -1 : s.top();
            cout << res << " ";
            s.push(arr[i]);
        }
    }                                         //This will print In reverse order
    vector<int> nextGreater(int arr[], int n) //Use one of this function
    {
        vector<int> v;
        stack<int> s;
        s.push(arr[n - 1]);
        v.push_back(-1);
        for (int i = n - 2; i >= 0; i--)
        {
            while (!s.empty() && s.top() <= arr[i])
                s.pop();
            int res = s.empty() ? -1 : s.top();
            v.push_back(res);
            s.push(arr[i]);
        }
        reverse(v.begin(), v.end());
        return v;
    }
    void printVect(vector<int> &v)
    {
        for (auto x : v)
            cout << x << " ";
    }
};
int main()
{
    Solution obj;
    vector<int> v;
    int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    obj.printNextGret(arr, n); //Use this for reversed order
    cout << "\n";
    v = obj.nextGreater(arr, n); //or this for correct order but with extra space
    obj.printVect(v);
}