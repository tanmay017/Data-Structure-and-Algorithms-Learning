#include <bits/stdc++.h>
using namespace std;
class Point
{
    public:
    int x;
    int y;
};

bool myCmp(Point p1,Point p2)
    {
        return (p1.x<p2.x);
    }
int main()
{
    Point arr[] = {{3,10},{2,8},{5,4}};
    int n = sizeof(arr)/sizeof(Point);
    sort(arr,arr+n,myCmp);
    for(auto i : arr)
    {
        cout<<i.x<<" "<<i.y<<endl;
    }
}