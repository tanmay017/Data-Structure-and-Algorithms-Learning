#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool isPlalindrome(string &str,int start,int end)
    {
        if(start >= end) return true;
        return (str[start] == str[end]) && isPlalindrome(str,start+1,end-1);
    }
};

int main()
{
    Solution obj1;
    string str = "aabbccbbad";
    if(obj1.isPlalindrome(str,0,str.length()-1)) cout<<"Given String is Pallindrome";
    else cout<<"Given String is not Pallindrome"; 
}