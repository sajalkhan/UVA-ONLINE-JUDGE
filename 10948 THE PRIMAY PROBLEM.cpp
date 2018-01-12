/**-------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    UVA 10948 THE PRIMAY PROBLEM
---------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
#define max 100000000
bool isprime[max];
long long prime[max];

void sieve()
{
    for(long i=4; i<=max; i+=2)isprime[i]=true;
    for(long i=3; i*i<=max; i+=2)
    {
        if(!isprime[i])for(long j=i*i; j<=max; j+=2*i)isprime[j]=true;
    }
    int k=0;
    prime[k++]=2;
    for(long i=3; i<=max; i+=2)if(!isprime[i])prime[k++]=i;
}
int main()
{
    sieve();
    long long n;
    while(cin>>n && n!=0)
    {
        long long b=0,i=0,m=n;
        while(n)
        {
            if(isprime[n])n--;
            else if(!isprime[n] && n+prime[i]>m)n--;
            else if(!isprime[n] && n+prime[i]<m)i++;
            else if(!isprime[n] && n+prime[i]==m)
            {
                b=1;
                printf("%lld:\n",m);
                printf("%lld+%lld\n",prime[i],n);
                break;
            }
        }
        if(!b)printf("%lld:\nNO WAY!\n",m);
    }
    return 0;
}
/*
1000000
31
641746
475942
604
88605
34
6296
469
1519
25
4179
622
93796
11
0
*/
