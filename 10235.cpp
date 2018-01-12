#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int n,N,m;
    while(scanf("%lu",&n)!=EOF)
    {
        bool flag=true;
        N=0;
        m=n;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            while(n!=0)
            {
                N=N*10+n%10;
                n=n/10;
            }
            bool flag=true;
            for(int i=2; i<=sqrt(N); i++)
            {
                if(N%i==0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
			{
				if(m!=N)
				{
					printf("%lu is emirp.\n",m);
				}
				else printf("%lu is prime.\n",m);
			}
			else
			{
				printf("%lu is prime.\n",m);
			}
        }
        if(!flag)
		{
			printf("%lu is not prime.\n",m);
		}
    }
    return 0;
}
