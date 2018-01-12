/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define max 9999999
int pf[max];
long j;
void prime_factor(long long n)
{
    for(long long i=2; i*i<=n; i++)
    {
        while(n%i==0)
        {
            pf[j++]=i;
            n/=i;
        }
    }
    if(n>1)pf[j++]=n;
}
int main()
{
    long long n;
    while(cin>>n && n)
    {
        j=0;
        if(n<0)pf[j++]=-1;
        prime_factor(abs(n));
        printf("%lld = ",n);
        for(int i=0; i<j; i++)
        {
            if(!i)printf("%d",pf[i]);
            if(i)printf(" x %d",pf[i]);
        }
        printf("\n");
    }
    return 0;
}