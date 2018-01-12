#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s1[10000],s2[10000];
	while(gets(s1))
	{
		int j=0;
		for(int i=0;i<strlen(s1);i++)
		{
			s2[j++]=s1[i]-7;
		}
		s2[j]='\0';
		puts(s2);
	}
	return 0;
}
