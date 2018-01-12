/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define maxi 9999999
vector<long long>prime;
bool isprime[maxi];
long long pf[maxi];
int j;
void sieve()
{
    for(long long i=3; i*i<=maxi; i+=2)
    {
        if(!isprime[i])for(long long j=i*i; j<=maxi; j+=i*2)isprime[j]=true;
    }
    prime.push_back(2);
    for(long long i=3;i<=maxi;i+=2)if(!isprime[i])prime.push_back(i);
}
void prime_factor(long long n)
{
    for(long  long i=0;prime[i]*prime[i]<=n;i++)
    {
        while(n%prime[i]==0)
        {
            pf[j++]=prime[i];
            n/=prime[i];
        }
    }
    if(n>1)pf[j++]=n;
}
int main()
{
    sieve();
    long long n;
    while(cin>>n && !(n<0))
    {
        j=0;
        prime_factor(abs(n));
        for(int i=0; i<j; i++)
        {
            printf("    %lld\n",pf[i]);
        }
        printf("\n");
    }
    return 0;
}