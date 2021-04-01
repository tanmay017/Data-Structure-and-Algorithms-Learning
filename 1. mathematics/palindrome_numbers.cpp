#include <bits/stdc++.h> //palindrome numbers means that a number when reversed is same as it's previous version
using namespace std;

class Solution
{
    public:
    bool palindrome_check(int num)
    {
        int rev = 0;
        int temp = num;
        while(temp != 0)
        {
            rev = rev*10 + temp%10;
            temp = temp/10;
        }
        return (rev == num);
    }
};

int main()
{
    Solution obj1;
    int num = 4553;
    if(obj1.palindrome_check(num)) cout<<"Yes";
    else cout<<"NO";
}