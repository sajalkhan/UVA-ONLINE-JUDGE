/*-------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12459 BEES ANCESTORS
--------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define mx 100
unsigned long long dp[mx];
unsigned long long fib(int n)
{
    if(n==0)return 1;
    if(n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    else
    {
        dp[n]=fib(n-1)+fib(n-2);
        return dp[n];
    }
}
int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        for(int i=0;i<mx;i++)dp[i]=-1;
        printf("%llu\n",fib(n));
    }
    return 0;
}
