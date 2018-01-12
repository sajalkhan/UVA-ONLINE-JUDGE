/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
void LCS(char*,char*);
int main()
{
    char s1[1001],s2[1001];
    while(gets(s1))
    {
        gets(s2);
        LCS(s1,s2);
    }
    return 0;
}
void LCS(char *s1,char *s2)
{
    int m=strlen(s1);
    int n=strlen(s2);
    int L[m+1][n+1];
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0 || j==0)
            {
                L[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1])
            {
                L[i][j]=L[i-1][j-1]+1;
            }
            else
            {
                L[i][j]=max(L[i][j-1],L[i-1][j]);
            }
        }
    }
    printf("%d\n",L[m][n]);
}