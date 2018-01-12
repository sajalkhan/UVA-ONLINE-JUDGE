#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100],s1[100],s2[100];
    memset(s,NULL,sizeof(s));
    s['A']='2';
    s['B']='2';
    s['C']='2';
    s['D']='3';
    s['E']='3';
    s['F']='3';
    s['G']='4';
    s['H']='4';
    s['I']='4';
    s['J']='5';
    s['K']='5';
    s['L']='5';
    s['M']='6';
    s['N']='6';
    s['O']='6';
    s['P']='7';
    s['Q']='7';
    s['R']='7';
    s['S']='7';
    s['T']='8';
    s['U']='8';
    s['V']='8';
    s['W']='9';
    s['X']='9';
    s['Y']='9';
    s['Z']='9';
    while(scanf("%s",s1)!=EOF)
    {
    	int j=0;
        for(int i=0;i<strlen(s1);i++)
		{
			if(isalpha(s1[i]))
			s2[j++]=s[s1[i]];
			else s2[j++]=s1[i];
		}
		s2[j]='\0';
		puts(s2);
    }
    return 0;
}
