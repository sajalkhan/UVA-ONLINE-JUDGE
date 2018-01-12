#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,p,L=0,a[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		L=0;
		scanf("%d",&m);
		double sum=0.0;
		for(int i=0;i<m;i++)
		{
			scanf("%d",&p);
			sum+=p;
			a[L++]=p;
		}
		sum=sum/m;
		int count=0;
		for(int i=0;i<m;i++)
		{
			if(a[i]>sum)
			{
				count++;
			}
		}
		double result=(100.0*count)/m;
		printf("%.3f%%\n",result);
	}
	return 0;
}
