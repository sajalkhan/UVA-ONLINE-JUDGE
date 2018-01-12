#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s[]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you",};
	string s1[101];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>s1[i];
	}
	int k=0,t=0;
	for(int i=0;i<16;i=k)
	{
		for(int j=0;j<n;j++)
		{
			if(j!=n-1 && k==16 && !t)k=0;
			else if(j==n-1 && k!=16)t=1;
			else if(j!=n-1 && t && k==16)
			{
				k=16;
				break;
			}
			cout<<s1[j]<<": "<<s[k++]<<endl;
		}
	}
	return 0;
}
