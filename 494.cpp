#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000],s1[100][10000];
    while(gets(s))
    {
        int count=0;
        int j=0,k=0;
        for(int i=0; i<strlen(s); i++)
        {
            if(isalpha(s[i]))
            {
                s1[j][k++]=s[i];
            }
            else if(isspace(s[i]) || isdigit(s[i]) || s[i]==39)
            {
                if(!k)
                {
                    continue;
                }
                else
                {
                    s1[j][k]='\0';
                    j++;
                    k=0;
                }
            }
        }
        s1[j][k]='\0';
        for(int i=0; i<=j; i++)
        {
            if(strlen(s1[i])>=1)
			{
				count++;
			}
        }
        printf("%d\n",count);
    }
    return 0;
}
