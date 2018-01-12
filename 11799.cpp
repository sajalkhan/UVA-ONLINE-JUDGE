#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,result;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		result=0;
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%d",&a);
			if(result<=a)
			{
				result=a;
			}
		}
		printf("Case %d: %d\n",i+1,result);
	}
	return 0;
}
