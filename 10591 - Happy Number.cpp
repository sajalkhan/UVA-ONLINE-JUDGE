/*
   AUTHOR : SAJAL KHAN
   PROBLEM: 10591 - Happy Number
*/

#include<bits/stdc++.h>
using namespace std;
long long fun(int n)
{
    long long num=0,m=n;
    while(m)
    {
        int x=m%10;
        num+=x*x;
        m/=10;
    }
    if(num<10)return num;
    return fun(num);
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,x;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&x);
        int result=fun(x);
        if(result!=1)printf("Case #%d: %d is an Unhappy number.\n",i,x);
        else printf("Case #%d: %d is a Happy number.\n",i,x);
    }
    return 0;
}