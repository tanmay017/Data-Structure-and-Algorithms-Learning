#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int, greater<int>> s; //for storing in Decresing order
    //set<int> s; //for storing in Default increasing order

    /* Insert Operations */
    s.insert(5);
    s.insert(20);
    s.insert(10);
    s.insert(15);
    s.insert(7);
    s.insert(25);
    s.insert(18);
    s.insert(30);
    s.insert(40);
    s.insert(60);
    s.insert(50);
    // set Container ignores Duplicate
    s.insert(5);
    s.insert(15);

    /* Different Ways of Traversals */
    for (auto x : s)
        cout << x << " ";
    cout << endl;

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;

    for (auto it = s.rbegin(); it != s.rend(); it++) //Traverse in reverse fasion
        cout << *it << " ";
    cout << endl;

    /* find function */
    auto it = s.find(15);
    if (it == s.end())
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;
    while (it != s.end()) //To print every value of every element present after found element
        cout << *it++ << " ";
    cout << endl;

    /* clear function */
    //cout << *s.begin() << endl;
    //s.clear();
    //cout << *s.begin() << endl;

    /* count function could be used as alternative to found */
    if (s.count(20))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    /* Erase function */
    auto it1 = s.find(15);
    auto it2 = s.find(10);
    s.erase(it2);          //deleting by iterator
    s.erase(18);           //deleting by value
    s.erase(it1, s.end()); //deleting group
    for (auto x : s)
        cout << x << " ";
    cout << endl;

    /* Upper bound and Lower bound */
    auto it3 = s.lower_bound(40);
    if (it3 != s.end())
        cout << (*it3) << endl;
    else
        cout << "Given element is greater than the largest" << endl;
    it3 = s.upper_bound(40);
    if (it3 != s.end())
        cout << (*it3) << endl;
    else
        cout << "Given element is greater than the largest" << endl;
}