/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10490 MR.AZAD AND HIS SON
*/
#include<bits/stdc++.h>
using namespace std;
#define max 100000000
bool isprime[max];
void sieve()
{
    for(int i=4;i<=max;i+=2)isprime[i]=true;
    for(int i=3;i*i<=max;i+=2)
    {
        if(!isprime[i])for(int j=i*i;j<=max;j+=2*i)isprime[j]=true;
    }
}
int prime(long long n)
{
    if(n<=max) return isprime[n];
    else
    {
        for(long long i=3;i*i<=n;i+=2)
        {
            if(n%i==0)return true;
        }
        return false;
    }
}
int main()
{
    int n;
    sieve();
    while(scanf("%d",&n) && n)
    {
        if(!prime(n))
        {
            long long result=0;
            result=pow(2,n)-1;
            if(!prime(result))
            {
                result=pow(2,n-1)*result;
                printf("Perfect: %lld!\n",result);
            }
            else printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else printf("Given number is NOT prime! NO perfect number is available.\n");

    }
    return 0;
}
