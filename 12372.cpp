#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c,k=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		k++;
		scanf("%d%d%d",&a,&b,&c);
		if(a<=20 && b<=20 && c<=20)
		{
			printf("Case %d: good\n",k);
		}
		else printf("Case %d: bad\n",k);
	}
	return 0;
}
