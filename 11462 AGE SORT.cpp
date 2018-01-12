/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11462 AGE SORT
*/
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll n,x;
    while(scanf("%llu",&n) && n)
    {
        vector<ll>v;
        for(long i=0;i<n;i++)
        {
            scanf("%llu",&x);
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(long i=0;i<n;i++)
        {
            if(i==n-1)cout<<v[i]<<endl;
            else cout<<v[i]<<" ";
        }
    }
    return 0;
}
