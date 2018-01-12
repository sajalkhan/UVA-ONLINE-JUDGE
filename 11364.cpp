#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+m,greater<int>());
		int sum=0;
		for(int i=0;i<m-1;i++)
		{
			sum+=a[i]-a[i+1];
		}
		printf("%d\n",sum*2);
	}
	return 0;
}
