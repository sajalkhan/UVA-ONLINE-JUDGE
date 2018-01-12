/*
	twine prime (p,p+2);
*/
#include<bits/stdc++.h>
using namespace std;
#define max 20000010
bool isprime[max];
int prime[max];
void sieve()
{
    for(int i=3; i<=sqrt(max); i+=2)
    {
        if(isprime[i]==false)
        {
            for(int j=i*i; j<=max; j+=i)
            {
                isprime[j]=true;

            }
        }
    }
    int k=1;
    for(int i=3;i<=max;i+=2)
	{
		if(!isprime[i] && !isprime[i+2])prime[k++]=i;
	}
}
int main()
{
    int n;
    sieve();
    while(scanf("%d",&n)!=EOF)
	{
		printf("(%d, %d)\n",prime[n],prime[n]+2);
	}
    return 0;
}
