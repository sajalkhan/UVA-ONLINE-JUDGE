#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    while(scanf("%lld",&n) && n)
    {
        ll result=0,sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&m);
            sum+=m;
            if(sum<0)sum=0;
            result=max(result,sum);
        }
        if(result)printf("The maximum winning streak is %lld.\n",result);
        else printf("Losing streak.\n");
    }
    return 0;
}
