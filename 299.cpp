#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[100];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
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
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
	}
}
