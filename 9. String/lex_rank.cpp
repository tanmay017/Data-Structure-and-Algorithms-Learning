#include <bits/stdc++.h> //Asumption is made that there is no rep character
using namespace std;     //Solution of Problem Calculate Lexicograpic Rank
const int CHAR = 256;
class Solution
{
public:
    int fact(int n)
    {
        int per = 1;
        for (int i = n; i >= 1; i--)
            per *= i;
        return per;
    }
    int lex_rank(string &str)
    {
        int n = str.length();
        int mul = fact(n);
        int res = 1;
        int count[CHAR] = {0};
        for (int i = 0; i < n; i++)
            count[str[i]]++;
        for (int i = 1; i < CHAR; i++) //This is the hack
            count[i] += count[i - 1];
        for (int i = 0; i < n - 1; i++)
        {
            mul = mul / (n - i);
            res = res + count[str[i] - 1] * mul;
            for (int j = str[i]; j < CHAR; j++) //This is part of hack
                count[j]--;
        }
        return res;
    }
};
int main()
{
    Solution obj;
    string str = "string";
    cout << obj.lex_rank(str);
}