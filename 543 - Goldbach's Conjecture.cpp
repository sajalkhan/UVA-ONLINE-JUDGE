/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define maxi 1000000
#define ull unsigned long long int
map<ull,bool>prime;
bool isprime[maxi];
void sieve()
{
    for(ull i=3; i*i<=maxi; i+=2)
    {
        if(!isprime[i])for(ull j=i*i; j<=maxi; j+=i*2)isprime[j]=true;
    }
    prime[2]=true;
    for(ull i=3; i<=maxi; i+=2)
    {
        if(!isprime[i])prime[i]=true;
    }
}
int main()
{
    sieve();
    ull n;
    while(cin>>n && n)
    {
        long long a=0,b=0;
        for(int i=2; i<=n; i++)
        {
            if(prime[i] && prime[n-i])
            {
                a=i;
                b=n-i;
                break;
            }
        }
        if(a && b)printf("%lld = %lld + %lld\n",n,a,b);
        else printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}