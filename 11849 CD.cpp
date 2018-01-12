
/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11849 CD
*/
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll n,m,x;
    while(scanf("%llu %llu",&n,&m) && (n||m))
    {
        map<ll,bool>mp;
        ll count=0;
        for(ll i=0;i<n;i++)
        {
            scanf("%llu",&x);
            mp[x]=true;
        }
        for(int i=0;i<m;i++)
        {
            scanf("%llu",&x);
            if(mp[x])count++;
        }
        printf("%llu\n",count);
    }
    return 0;
}
