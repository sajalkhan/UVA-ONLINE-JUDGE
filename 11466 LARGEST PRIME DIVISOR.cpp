
/**------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: 11466 LARGEST PRIME DIVISOR
---------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define max 10000000
#define pb push_back
bool isprime[max];
vector< ll >prime;
void sieve()
{
    for(long long i=3; i*i<=max; i+=2)
    {
        if(!isprime[i])for(long long j=i*i; j<=max; j+=2*i)isprime[j]=true;
    }
    prime.pb(2);
    for(long long i=3; i<=max; i+=2)if(!isprime[i])prime.pb(i);
}
int main()
{
    sieve();
    unsigned long long n;
    while(cin>>n && n!=0)
    {
        long long i=0,count=0,N=n,M,result=0;
        if(N<0)N*=-1;
        for(long i=0; prime[i]*prime[i]<=N; i++)
        {
            while(N%prime[i]==0)
            {
                long long p=prime[i];
                if(result<p)result=p,count++;
                M=p;
                N/=p;
            }
        }
        if(N>1)
        {
            if(result<N)count++;
            M=N;
        }
        if(count>1)printf("%lld\n",M);
        else printf("-1\n");
    }
    return 0;
}
