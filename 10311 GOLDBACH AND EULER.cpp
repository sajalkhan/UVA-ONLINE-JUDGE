/*
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: 10311 GOLDBACH AND EULER
*/
#include<bits/stdc++.h>
using namespace std;

#define max 100000010
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
}
int main()
{
    sieve();
    int n;
    while(cin>>n)
    {
        if(n&1)
        {
            if(!isprime[n-2] && n>4)printf("%d is the sum of 2 and %d.\n",n,n-2);
            else printf("%d is not the sum of two primes!\n",n);
        }
        else
        {
            int p=n/2,b=0;
            for(int i=p-1;i>=1;i--)
            {
                if(!isprime[i] && !isprime[n-i])
                {
                    b=1,printf("%d is the sum of %d and %d.\n",n,i,n-i);
                    break;
                }
            }
            if(!b)printf("%d is not the sum of two primes!\n",n);
        }
    }
    return 0;
}
