#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[101],t,n,k;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		k=0;
		scanf("%d",&n);
		long long N=((((((n*567)/9)+7492)*235)/47)-498);
		while(N!=0)
		{
			a[k++]=abs(N)%10;
			N=N/10;
		}
		printf("%d\n",a[1]);
	}
	return 0;
}
