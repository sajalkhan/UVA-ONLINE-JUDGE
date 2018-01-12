#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	char s[50];
	scanf("%d",&n);
	for(int J=0;J<n;J++)
	{
		int sum=0;
		scanf("%d",&m);
		int a[m+1];
		getchar();
		for(int i=0;i<m;i++)
		{
			gets(s);
			if(strcmp(s,"LEFT")==0)a[i]=-1,sum-=1;
			else if(strcmp(s,"RIGHT")==0)a[i]=1,sum+=1;
			else
			{
				string s1;
				for(int i=6;i<strlen(s);i++)
				{
					if(isdigit(s[i]))
					{
						s1+=s[i];
					}
				}
				int r=atoi(s1.c_str());
				a[i]=a[r-1];
				sum+=a[i];
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
/*
1
20
LEFT
SAME AS 1
SAME AS 2
SAME AS 1
RIGHT
LEFT
LEFT
RIGHT
LEFT
SAME AS 9
RIGHT
RIGHT
SAME AS 11
SAME AS 7
SAME AS 8
SAME AS 2
SAME AS 5
SAME AS 2
SAME AS 9
LEFT

ANS: -6
*/
