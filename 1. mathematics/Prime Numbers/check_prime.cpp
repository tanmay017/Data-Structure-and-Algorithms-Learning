#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool check_prime(int num)
    {
        if (num == 1)
            return false;
        if (num == 2 || num == 3)
            return true;
        if (num % 2 == 0 || num % 3 == 0)
            return false;
        for (int i = 5; i * i <= num; i = i + 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
                return false;
        }
        return true;
    }
};

int main()
{
    Solution obj1;
    int num = 91;
    if (obj1.check_prime(num))
        cout << "Number is prime";
    else
        cout << "Number is not prime";
}