/*
    AUTHOR: SAJAL KHAN
    PROBLEM: UVA 11636 HELLO WORLD!
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,t=1;
    while(scanf("%d",&n) && n>=0)
    {
        int count=0,H=1;
        if(n==1 || n==0)
        {
            printf("Case %d: %d\n",t++,count);
            continue;
        }
        while(H<n)
        {
            H+=H;
            count++;
        }
        printf("Case %d: %d\n",t++,count);
    }
    return 0;
}
