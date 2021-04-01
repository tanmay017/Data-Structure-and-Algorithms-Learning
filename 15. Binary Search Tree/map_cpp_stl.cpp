#include <bits/stdc++.h> //rest function works same as set
using namespace std;

int main()
{
    /* insert function */
    map<int, int> m;
    //map<int,int,greater<int>> m; for reverse order
    m.insert({10, 200});
    m[5] = 100;
    m.insert({3, 300});
    m.insert({3, 400}); //duplicate in insert function this will get ignored
    m[10] = 150;        //duplicate in square notation this will upadate the value for given key
    for (auto x : m)
    {
        cout << x.first << " ";
        cout << x.second << " ";
    }
    cout << endl;
    cout << m.size() << " ";
    cout << m[20] << " "; //this shows that if we try to access invalid key than this key will be inserted in map with value 0
    cout << m.size() << " ";
}