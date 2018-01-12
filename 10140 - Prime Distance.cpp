/*
    Md.soharub hossen
    Daffodil International University
*/
#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long int
#define mx 9999999
#define pb push_back
bool mark[mx];
bool seg[mx];

vector< ll >prime;
void sieve()
{
    mark[0]=true;
    mark[1]=true;
    for(int i=4; i<=mx; i+=2)mark[i]=true;
    for(int i=3; i*i<mx; i+=2)
    {
        if(!mark[i])
        {
            for(int j=i*i; j<=mx; j+=2*i)mark[j]=true;
        }
    }
    prime.pb(2);
    for(int i=3; i<=mx; i+=2)
    {
        if(!mark[i])prime.pb(i);
    }
}

int main()
{
    sieve();
    ll start,L,a,b;
    while(cin>>a>>b)
    {
        L=a;
        vector< ll >segment;
        memset(seg,false,mx);
        for(long long i=0; prime[i]*prime[i]<=b; i++)
        {
            if(a%prime[i]==0)start=a;
            else
            {
                start=a/prime[i];
                start=(start*prime[i])+prime[i];
            }
            for(long long j=start; j<=b; j+=prime[i])seg[j-L]=true;
        }
        for(long long i=a; i<=b; i++)
        {
            if(i<=mx)
            {
                if(!mark[i])segment.pb(i);
                continue;
            }
            if(!seg[i-L])segment.pb(i);
        }
        long long result1=0,result2=1000001,max1=0,max2=0,min1=0,min2=0;
        if(segment.size()>=2)
        {
            for(long long i=0; i<segment.size()-1; i++)
            {
                long long temp=segment[i+1]-segment[i];
                if(result2>temp)
                {
                    result2=temp;
                    min1=segment[i];
                    min2=segment[i+1];
                }
                if(result1<temp)
                {
                    result1=temp;
                    max1=segment[i];
                    max2=segment[i+1];
                }
            }
            printf("%llu,%llu are closest, %llu,%llu are most distant.\n",min1,min2,max1,max2);
        }
        else  printf("There are no adjacent primes.\n");
    }
    return 0;
}
