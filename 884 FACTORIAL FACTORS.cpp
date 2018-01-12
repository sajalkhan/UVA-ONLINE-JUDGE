/**-------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 884 FACTORIAL FACTORS
----------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define max 1000001
int prime_fact[max];
bool isprime[max];
int prime[max];
void sieve()
{
    for(int i=3; i*i<=max; i+=2)
    {
        if(!isprime[i])for(int j=i*i; j<=max; j+=2*i)isprime[j]=true;
    }
    int k=0;
    prime[k++]=2;
    for(int i=3; i<=max; i+=2)if(!isprime[i])prime[k++]=i;
}
void prime_factor()
{
    sieve();
    int result=0;
    for(int i=2; i<=max; i++)
    {
        int m=i;
        for(int j=0; prime[j]*prime[j]<=m; j++)
        {
            while(m%prime[j]==0)
            {
                result++;
                m/=prime[j];
            }
        }
        if(m>1)result++;
        prime_fact[i]=result;
    }
}
int main()
{
    prime_factor();
    int n;
    while(cin>>n)
    {
        printf("%d\n",prime_fact[n]);
    }
    return 0;
}
