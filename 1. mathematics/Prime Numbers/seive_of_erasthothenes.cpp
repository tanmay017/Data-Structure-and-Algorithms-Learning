#include <bits/stdc++.h>//program to print prime nu,bers upto given number
using namespace std;

class solution
{
    public:
    void print_prime(int num)
    {
       vector<bool> isPrime(num+1,true);
       isPrime[0] = false;
       isPrime[1] = false;
       for(int i = 2;i*i <= num;i++)
       {
           if(isPrime[i])
           {
               for(int j = 2*i;j <= num;j = j+i)
               {
                   isPrime[j] = false;
               }
           }
       }
       for(int i = 2;i <= num;i++)
       {
           if(isPrime[i]) cout<<i<<" ";
       }
    }
};

int main()
{
    solution obj1;
    int num = 97;
    obj1.print_prime(num);
    return 0;
}
