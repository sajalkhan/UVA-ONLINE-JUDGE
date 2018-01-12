#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,result;
	char str[10000];
	while(scanf("%ld",&n)!=EOF)
	{
		result=0;
		while(n--)
		{
			scanf("%s",str);
			if(strcmp(str,"donate")==0)
			{
				cin>>m;
				result+=m;
			}
			if(strcmp(str,"report")==0)
			{
				cout<<result<<endl;
			}
		}
	}
	return 0;
}
