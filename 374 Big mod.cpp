#include<bits/stdc++.h>
using namespace std;
long long MOD(long long x,long long n,long long m)
{
    if(n==0) return 1;
    if(n&1)return ((x%m)*(MOD(x,n-1,m)))%m;
    else
    {
        long long y=MOD(x,n/2,m);
        return ((y%m)*(y%m))%m;
    }
}
int main()
{
    long long b,p,m;
    while(~scanf("%lld %lld %lld",&b,&p,&m))
    {
        printf("%lld\n",MOD(b,p,m));
    }
    return 0;
}
