#include <bits/stdc++.h>
using namespace std;

#define log(args...)                             \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
#define logarr(arr, a, b)            \
    for (int i = (a); i <= (b); i++) \
        cout << (arr[i]) << " ";     \
    cout << endl;

int main()
{
    vector<int> v;
    log(v.size(), v.capacity());
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        log(v.size(), v.capacity());
    }

    vector<int> v1(10, -1);
    logarr(v1, 0, v1.size() - 1);
    vector<int> v2{10, 20, 30};
    vector<int> v3(v2.begin(), v2.end());
    logarr(v3, 0, v3.size() - 1);
    // vector<int> v4(arr, arr+x); x -> index value

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    v1[2] = 23;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    // for-each
    cout << endl;

    for (auto el : v1)
    {
        cout << el << " ";
    }
    // two arrays compare ?????
    cout << ((v3 == v2) ? "true" : "false");
    // all true// all false

    vector<bool> arr;
    for (int i = 0; i < 5; i++)
    {
        arr.push_back(true);
    }

    cout << ((arr == vector<bool>(5, true) ? "\ntrue" : "\nfalse"));
    v.clear();
    cout << "\n"
         << v.size();
    cout << (v.empty());
    return 0;
}