#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	while(cin>>s1>>s2)
	{
		for(int i=0;i<s2.size();i++)
		{
			if(s1[0]==s2[i])
			{
				s1.erase(s1.begin());
			}
		}
		if(s1.size()==0)
		{
			printf("Yes\n");
		}
		else printf("No\n");
	}
	return 0;
}
