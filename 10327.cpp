#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[10000];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					count++;
				}
			}
		}
		printf("Minimum exchange operations : %d\n",count);
	}
	return 0;
}
