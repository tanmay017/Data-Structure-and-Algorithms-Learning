#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void printMedians(int arr[],int n)
    {
        priority_queue<int> s;
        priority_queue<int,vector<int>,greater<int>> g;
        s.push(arr[0]);
        cout<<arr[0]<<endl;
        for(int i = 1;i < n;i++)
        {
            int x = arr[i];
            if(s.size() > g.size())
            {
                if(s.top() > x)
                {
                    g.push(s.top());
                    s.pop();
                    s.push(x);
                }
                else
                    g.push(x);
                cout<<(s.top()+g.top())/2.0<<endl;
            }
            else
            {
                if(s.top() <= x)
                    s.push(x);
                else
                {
                    g.push(x);
                    s.push(g.top());
                    g.pop();
                }
                cout<<s.top()<<endl;
            }
        }
    }
};
int main()
{
    Solution obj;
    int keys[] = { 12, 15, 10, 5, 8, 7, 16};
    obj.printMedians(keys,7);
	return 0;
}