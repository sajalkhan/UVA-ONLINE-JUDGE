/**-------------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: 10042 smith numbers
---------------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

#define mx 1000000
bool isprime[mx];
int prime[mx];
void sieve()
{
    for(int i=3; i*i<=mx; i+=2)
    {
        if(!isprime[i])
        {
            for(int j=i*i; j<=mx; j+=2*i)isprime[j]=1;
        }
    }
    int k=0;
    prime[k++]=2;
    for(int i=3; i<=mx; i+=2)if(!isprime[i])prime[k++]=i;
}
int main()
{
    sieve();
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int j=n+1; ;j++)
        {
            int sum1=0,sum2=0,M=j,m=j;
            while(M)sum1+=M%10,M/=10;
            for(int i=0; prime[i]*prime[i]<=m; i++)
            {
                while(m%prime[i]==0)
                {
                    int x=prime[i];
                    m/=prime[i];
                    while(x)sum2+=x%10,x/=10;
                }
            }
            if(m>1 && sum2)
            {
                while(m)sum2+=m%10,m/=10;
            }
            if(sum1==sum2)
            {
                printf("%d\n",j);
                break;
            }
        }
    }
    return 0;
}
