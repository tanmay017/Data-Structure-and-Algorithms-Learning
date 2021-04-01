#include <bits/stdc++.h>
using namespace std;

int palPart(string str,int i,int j)
{
    if(isPalindrome(str,i,j))
        return 0;
    int res = INT_MAX;
    for(int k = i;k <j;k++)
        res = min(res,1+palPart(str,i,k)+palPart(str,k+1,j));
}
int main()
{
    string str = "geek";

}