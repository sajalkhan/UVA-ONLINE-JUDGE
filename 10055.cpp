#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long a,b;
	while(scanf("%llu %llu",&a,&b)!=EOF)
	{
		if(a>=b)
		{
			printf("%llu\n",a-b);
		}
		else printf("%llu\n",b-a);
	}
	return 0;
}
