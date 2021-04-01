#include <bits/stdc++.h> //Maximum of all subarrays of size k
using namespace std;
class Solution
{
public:
    void printMaxOfEach(int arr[], int n, int k)
    {
        deque<int> dq;
        for (int i = 0; i < k; i++)
        {
            while (!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        for (int i = k; i < n; i++)
        {
            cout << arr[dq.front()] << " ";
            while (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            while (!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        cout << arr[dq.front()];
    }
};
int main()
{
    Solution obj;
    int arr[] = {20, 40, 30, 10, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    obj.printMaxOfEach(arr, n, k);
}