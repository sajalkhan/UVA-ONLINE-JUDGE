#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[102];
	while(scanf("%s",str))
	{
		int ln=strlen(str);
		int sum=0;
		if(ln==1 && str[0]=='0')
		{
			break;
		}
		for(int i=0;i<ln;i+=2)
		{
			sum+=str[i]-48;
		}
		for(int i=1;i<ln;i+=2)
		{
			sum-=str[i]-48;
		}
		if(sum%11==0 ? printf("%s is a multiple of 11\n",str): printf("%s is not multiple of 11\n",str));
	}
	return 0;
}
