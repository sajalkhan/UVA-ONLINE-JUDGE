/**-------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 583 PRIME FACTOR
---------------------------------------------**/

#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define max 100000000
bool isprime[max];
ll prime[max];
void sieve()
{
    for(long i=3;i*i<=max;i+=2)
    {
        if(!isprime[i])for(long j=i*i;j<=max;j+=2*i)isprime[j]=true;
    }
    int k=0;
    prime[k++]=2;
    for(long i=3;i<=max;i+=2)if(!isprime[i])prime[k++]=i;
}
int main()
{
    sieve();
    long long N;
    while(cin>>N && N!=0)
    {
        long long a[100000],j=0,b=0,M=N;
        if(N<0)b=1,N=abs(N);
        for(int i=0;prime[i]*prime[i]<=N;i++)
        {
            while(N%prime[i]==0)
            {
                a[j++]=prime[i];
                N/=prime[i];
            }
        }
        if(N>1)a[j++]=N;
        if(b)
        {
            cout<<M<<" = -1 x ";
            for(int i=0;i<j;i++)
            {
                if(i)printf(" x ");
                cout<<a[i];
            }
            printf("\n");
        }
        else
        {
            cout<<M<<" = ";
            for(int i=0;i<j;i++)
            {
                if(i)printf(" x ");
                cout<<a[i];
            }
            printf("\n");
        }
    }
    return 0;
}
