/**----------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11338 GCD LCM
------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    long long a,b,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        if(b%a==0)printf("%lld %lld\n",a,b);
        else printf("-1\n");
    }
    return 0;
}
