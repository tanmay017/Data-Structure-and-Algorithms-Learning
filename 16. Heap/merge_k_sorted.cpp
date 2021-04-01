#include <bits/stdc++.h> //refer self paced DSA
using namespace std;
struct Triplet {
    int value;
    int arrPos;
    int valuePos;
    Triplet(int v,int ap,int vp)
    {
        value = v;
        arrPos = ap;
        valuePos = vp;
    }
};

struct MyCmp
{
   bool operator () (Triplet &t1,Triplet &t2)
   { return (t1.value > t2.value); }
};

vector<int> mergeArr(vector<vector<int>> &arr)
{
    vector<int> res;
    priority_queue<Triplet,vector<Triplet>,MyCmp> pq;
    for(int i = 0;i < arr.size();i++)
    {
        Triplet t(arr[i][0],i,0);
        pq.push(t);
    }
    while(!pq.empty())
    {
        Triplet curr = pq.top();
        pq.pop();
        res.push_back(curr.value);
        int ap = curr.arrPos;
        int vp = curr.valuePos;
        if(vp + 1 < arr[ap].size())
        {
            Triplet t(arr[ap][vp+1],ap,vp+1);
            pq.push(t);
        }
    }
    return res;
}
void printArr(vector<int> &v)
{
    for(int i = 0;i < v.size();i++)
        cout<<v[i]<<" ";
}
int main()
{
    vector<vector<int>> v { {4,10,30,40},
                            {2,11,35,50},
                            {7,15,25,27} };
    vector<int> res = mergeArr(v);
    printArr(res);
}