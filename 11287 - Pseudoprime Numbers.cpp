/**
   AUTHOR : SAJAL KHAN
   PROBLEM: UVA 11287 - Pseudoprime Numbers
*/

#include<bits/stdc++.h>
using namespace std;

#define max 100000
bool isprime[max];
void sieve()
{
    isprime[0]=true;
    isprime[1]=true;
    for(int i=4;i<=max;i+=2)isprime[i]=true;
    for(int i=3;i*i<=max;i+=2)
    {
        if(!isprime[i])for(int j=i*i;j<=max;j+=2*i)isprime[j]=true;
    }
}
int prime(int n)
{
    if(n>max)
    {
        for(long long i=3;i*i<=n;i++)if(n%i==0)return true;
        return false;
    }
    else
    {
        if(!isprime[n])return false;
        else return true;
    }
}
long long mod(long long a,long p,long n)
{
    if(p==0)return 1;
    if(p&1)return ((a%n)*mod(a,p-1,n))%n;
    else
    {
        long long m=mod(a,p/2,n);
        return ((m%n)*(m%n))%n;
    }
}
int main()
{
    sieve();
    int p,a;
    while(scanf("%d %d",&p,&a) && (p || a))
    {
        int t=prime(p);
        if(!t)printf("no\n");
        else
        {
            int b=mod(a,p,p);
            if(a==b)printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}