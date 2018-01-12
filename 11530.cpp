#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=1,sum;
	char s[1000];
	scanf("%d",&n);
	getchar();
	while(i<=n)
	{
		sum=0;
		gets(s);
		if(strlen(s)==0)continue;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]==' '||s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w')
			sum+=1;
			else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
			sum+=2;
			else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
			sum+=3;
			else if(s[i]=='s'||s[i]=='z')
			sum+=4;
		}
		printf("Case #%d: %d\n",i,sum);
		i++;
	}
	return 0;
}
