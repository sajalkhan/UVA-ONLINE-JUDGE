/*----------------------------------------
    Md.soharub hossen
    Daffodil International University
-----------------------------------------*/
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
    ll start,L,a,b,t;
    cin>>t;
    for(ll i=0; i<t; i++)
    {
        cin>>a>>b;
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
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        ll Ln=segment.size();
        if(Ln<2)
        {
            printf("No jumping champion\n");
            continue;
        }
        for(ll i=0;i<Ln-1;i++)
        {
            ll num=segment[i+1]-segment[i];
            mp[num]++;
        }
        long long result=0,final_result=0,b=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            ll num=it->second;
            if(result<num)
            {
                b=0;
                result=num;
                final_result=it->first;
            }
            else if(result==num)b=1;
        }
        if(!b && Ln>1)printf("The jumping champion is %lld\n",final_result);
        else printf("No jumping champion\n");
    }
    return 0;
}
/*
12
607 824
248 249
1 1000000
61 344
222 737
856 906
545 684
915 929
817 894
67 363
853 963
125 282
*/