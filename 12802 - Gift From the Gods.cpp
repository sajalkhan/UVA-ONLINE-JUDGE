///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;
#define mx 1000001
bool isprime[mx];
void sieve()
{
    for(int i=4;i<=mx;i+=2)isprime[i]=true;
    for(int i=3;i*i<=mx;i+=2)
    {
        if(!isprime[i])
        {
            for(int j=i*i;j<=mx;j+=2*i)isprime[j]=true;
        }
    }
}
int main()
{
    int n;
    sieve();
    while(scanf("%d",&n))
    {
        printf("%d\n",n*2);
        if(!isprime[n])
        {
            int x=n;
            int y=0;
            while(n)
            {
                y=y*10+n%10;
                n/=10;
            }
            if(x==y)break;
        }
    }
    return 0;
}
