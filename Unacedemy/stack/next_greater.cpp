#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &a)
{
    int n = a.size();
    vector<int> nge(n);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

void printArr(vector<int> &nge)
{
    for (int i = 0; i < nge.size(); i++)
        cout << nge[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    vector<int> nge = nextGreaterElement(v);
    printArr(nge);
}