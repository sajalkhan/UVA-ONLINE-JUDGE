/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define max 99999999
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
    while(cin>>n)
    {
        long long sum=0,p1=0,p2=0;
        while(prime[p1]<=n)
        {
            a[p2++]=prime[p1];
            sum+=prime[p1];
            p1++;
        }
        if(n<8)printf("Impossible.\n");
        else
        {
            if(n&1)
            {
                printf("2 3 ");
                n-=5;
                int i;
                for(i=0; i<p2; i++)
                {
                    long long result=a[i]+a[p2-1];
                    if(result<n)continue;
                    if(result>n)
                    {
                        p2--;
                        i=-1;
                        continue;
                    }
                    if(result==n)break;
                }
                cout<<a[i]<<" "<<a[p2-1]<<endl;
            }
            else
            {
                printf("2 2 ");
                n-=4;
                int i;
                for(i=0; i<p2; i++)
                {
                    long long result=a[i]+a[p2-1];
                    if(result<n)continue;
                    if(result>n)
                    {
                        p2--;
                        i=-1;
                        continue;
                    }
                    if(result==n)break;
                }
                cout<<a[i]<<" "<<a[p2-1]<<endl;
            }
        }
    }
    return 0;
}
/*
1
7
20
55
255
30000
1000001
2222222
3333333
9999999
10000000
*/