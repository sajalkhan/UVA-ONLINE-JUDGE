#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,sum;
	while(scanf("%lld",&n))
	{
		sum=1;
		if(n<0) break;
		else
		{
			for(int i=1;i<=n;i++)
			{
				sum+=i;
			}
			printf("%lld\n",sum);
		}
	}
	return 0;
}
