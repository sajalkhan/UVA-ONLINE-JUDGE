#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100],t=0;
	while(scanf("%d",&n)&&n)
	{
		t++;
		int sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		sum=(sum/n);
		int count=0;
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(a[i]>sum)
			{
				count+=a[i]-sum;
			}
		}
		printf("Set #%d\n",t);
		printf("The minimum number of moves is %d.\n\n",count);
	}
	return 0;
}
