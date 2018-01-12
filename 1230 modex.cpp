/*
    problem: uva 1230 modex
*/

#include<bits/stdc++.h>
using namespace std;
int mod(int x,int y,int n)
{
    if(y==0)return 1;
    if(y&1)return ((x%n)*mod(x,y-1,n))%n;
    else
    {
        long long m=mod(x,y/2,n);
        return ((m%n)*(m%n))%n;
    }
}
int main()
{
    int t,x,y,n;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d",&x,&y,&n);
        printf("%d\n",mod(x,y,n));
    }
    return 0;
}
