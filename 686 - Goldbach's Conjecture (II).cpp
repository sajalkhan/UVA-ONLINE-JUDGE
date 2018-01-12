/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define max 9999999
long long a[10000000];
long long prime[max];
bool isprime[max];
void sieve()
{
    isprime[0]=true;
    isprime[1]=true;
    for(long long i=4; i<=max; i+=2)isprime[i]=true;
    for(long long i=3; i*i<=max; i+=2)
    {
        if(!isprime[i])
        {
            for(long long j=i*i; j<=max; j+=2*i)isprime[j]=true;
        }
    }
    int k=0;
    prime[k++]=2;
    for(long i=3; i<=max; i+=2)
    {
        if(!isprime[i])prime[k++]=i;
    }
}
int main()
{
    sieve();
    long long n;
    while(cin>>n && n!=0)
    {
        long long sum=0,p1=0;
        while(prime[p1]<=n)
        {
            a[p1]=prime[p1];
            sum+=prime[p1];
            p1++;
        }
        int count=0;
        for(int i=0;i<p1;i++)
        {
            for(int j=i;j<p1;j++)
            {
                if(a[i]+a[j]==n)count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
/*
4
6
10
12
1000
32766
22824
32664
32266
88
23232
0
*/
