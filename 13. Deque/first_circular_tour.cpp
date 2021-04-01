#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstPet(int pet[], int dist[], int n)
    {
        int curr_pet = 0;
        int prev_pet = 0;
        int start = 0;
        for (int i = 0; i < n; i++)
        {
            curr_pet += pet[i] - dist[i];
            if (curr_pet < 0)
            {
                prev_pet += curr_pet;
                curr_pet = 0;
                start = i + 1;
            }
        }
        return ((curr_pet + prev_pet) >= 0) ? start + 1 : -1;
    }
};
int main()
{
    Solution obj;
    int pet[] = {50, 10, 60, 100};
    int dist[] = {30, 20, 100, 10};
    int n = sizeof(pet) / sizeof(pet[0]);
    cout << obj.firstPet(pet, dist, n);
}