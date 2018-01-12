/**-----------------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATINAL UNIVERSITY
    PROBLEM: UVA 1210 SUM OF CONSECUTIVE PRIME NUMBERS
--------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define max 100001
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
int main()
{
    sieve();
    int n;
    while(scanf("%d",&n) && n)
    {
        int count=0;
        for(int i=0;prime[i]<=n;i++)
        {
            int result=0;
            for(int j=i;prime[j]<=n;j++)
            {
                result+=prime[j];
                if(result==n)
                {
                    count++;
                    break;
                }
                if(result>n)break;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
