/**-----------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 294 DIVISORS
-------------------------------------*/
/*
    total prime divisor of 1000 = 2,2,2,5,5,5
    so 1000=2^3,5^3
    now add power +1 = (3+1),(3+1)
    so total divisors of 1000 = (3+1)*(3+1)=16
*/
#include<bits/stdc++.h>
using namespace std;
#define max 10000000
bool isprime[max];
int prime[max];
void sieve()
{
    for(int i=3;i*i<=max;i+=2)
    {
        if(!isprime[i])for(int j=i*i;j<=max;j+=2*i)isprime[j]=true;
    }
    int k=0;
    prime[k++]=2;
    for(int i=3;i<=max;i+=2)if(!isprime[i])prime[k++]=i;
}
int factor(int n)
{
    int result=1;
    for(int i=0;prime[i]*prime[i]<=n;i++)
    {
        int count=1;
        while(n%prime[i]==0)
        {
            n/=prime[i];
            count++;
        }
        result*=count;
    }
    if(n>1)result*=2;
    return result;
}
int main()
{
    sieve();
    int n,x,y;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int num,result=0;
        scanf("%d %d",&x,&y);
        for(int I=x;I<=y;I++)
        {
            int Div=factor(I);
            if(result<Div)
            {
                num=I;
                result=Div;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",x,y,num,result);
    }
    return 0;
}
