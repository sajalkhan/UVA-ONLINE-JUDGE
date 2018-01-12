/*
    AUTHOR : SAJAL KHAN
    PROBLEM: 11764 - Jumping Mario
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,m,L=0,H=0,b=0,x;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&m);
            if(!b)x=m,b=1;
            else
            {
                if(x>m)L++,x=m;
                if(x<m)H++,x=m;
            }
        }
        printf("Case %d: %d %d\n",i,H,L);
    }
    return 0;
}
