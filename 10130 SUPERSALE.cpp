/**-----------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 10130 SUPERSALE
-------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll dp[1001][1001];
ll weight[1001];
ll cost[1001];
ll item,capacity;
ll knapsack(ll i,ll w)
{
    if(i==item)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    ll profit1=0,profit2=0;
    if(w+weight[i]<=capacity)
    {
        profit1=cost[i]+knapsack(i+1,w+weight[i]);
    }
    profit2=knapsack(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    int t,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&item);
        for(int i=0; i<item; i++)
        {
            scanf("%lld %lld",&cost[i],&weight[i]);
        }
        scanf("%d",&c);
        ll result=0;
        for(int i=0;i<c;i++)
        {
            memset(dp,-1,sizeof(dp));
            scanf("%lld",&capacity);
            result+=knapsack(0,0);
        }
        printf("%lld\n",result);
    }
    return 0;
}
/*
2
3
72 17
44 23
31 24
1
26
6
64 26
85 22
52 4
99 18
39 13
54 9
4
23
20
20
26
*/
