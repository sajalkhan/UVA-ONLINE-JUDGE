/**-------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 10830 A NEW FUNCTION
---------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll MSLCM(ll n)
{
    ll count=1,x,y,result=0;
    while(count<=n)
    {
        x=n/count;
        y=n/x;
        result+=(y*(y+1)/2-(count-1)*((count-1)+1)/2)*x;
        count=y+1;
    }
    result-=n+(n*(n+1)/2);
    return result+1;
}
int main()
{
    ll n;
    int i=1;
    while(scanf("%llu",&n) && n)
    {
        printf("Case %d: %lld\n",i++,MSLCM(n));
    }
    return 0;
}
