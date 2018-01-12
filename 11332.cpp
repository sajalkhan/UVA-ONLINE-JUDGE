#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,sum;
	while(scanf("%ld",&n)&&n)
	{
		if(n<10)
		{
			printf("%ld\n",n);
		}
		while(n>9)
		{
			sum=0;
			while(n>0)
			{
				sum+=n%10;
				n/=10;
			}
			if(sum<10)
			{
				printf("%ld\n",sum);
				break;
			}
			else n=sum;
		}
	}
	return 0;
}
