/**----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 1246 FIND TERRORIST
------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define max 10000000
int prime[max];
bool isprime[max];
void sieve()
{
    isprime[0]=true;
    isprime[1]=true;
    for(int i=4;i<=max;i+=2)isprime[i]=true;
    for(int i=3;i*i<=max;i+=2)
    {
        if(!isprime[i])for(int j=i*i;j<=max;j+=2*i)isprime[j]=true;
    }
    int k=0;
    prime[k++]=2;
    for(int i=3;i<=max;i+=2)if(!isprime[i])prime[k++]=i;
}
int factor(int n,int m)
{
    int a[100000],j=0;
    for(int i=n;i<=m;i++)
    {
        if(!isprime[i])a[j++]=i;
        else
        {
            int num=i,count=0;
            for(int k=0;prime[k]*prime[k]<=num;k++)
            {
                while(num%prime[k]==0)
                {
                    count++;
                    num/=prime[k];
                }
                if(prime[k]<num && count)
                {
                    count=0;
                    break;
                }
                else if(!isprime[count+1])a[j++]=i;
            }
        }
    }
    if(!j)printf("-1\n");
    else
    {
        for(int i=0;i<j;i++)
        {
            if(i==j-1)printf("%d\n",a[i]);
            else printf("%d ",a[i]);
        }
    }
}
int main()
{
    sieve();
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        factor(x,y);
    }
    return 0;
}
