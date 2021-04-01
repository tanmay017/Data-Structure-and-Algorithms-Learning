#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void myUnion(int a[], int b[], int n1, int n2)
    {
        int i = 0;
        int j = 0;
        while (i < n1 && j < n2)
        {
            if (i > 0 && a[i] == a[i - 1])
            {
                i++;
                continue;
            }
            if (j > 0 && b[j] == b[j - 1])
            {
                j++;
                continue;
            }
            if (a[i] < b[j])
            {
                cout << a[i] << " ";
                i++;
            }
            else if (a[i] > b[j])
            {
                cout << b[j] << " ";
                j++;
            }
            else
            {
                cout << a[i] << " ";
                i++;
                j++;
            }
        }
        while (i < n1)
        {
            if (i > 0 && a[i] == a[i - 1])
            {
                i++;
                continue;
            }
            cout << a[i] << " ";
            i++;
        }
        while (j < n2)
        {
            if (j > 0 && b[j] == b[j - 1])
            {
                j++;
                continue;
            }
            cout << b[j] << " ";
            j++;
        }
    }
};
int main()
{
    Solution obj1;
    int a[] = {2, 3, 3, 3, 4};
    int b[] = {3, 4, 4, 7, 9, 10};
    int n1 = sizeof(a) / 4;
    int n2 = sizeof(b) / 4;
    obj1.myUnion(a, b, n1, n2);
}