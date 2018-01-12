/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int f[1000007];
void failure_function(string pattern,long p_len)
{
    f[0]=0;
    int k=1;
    int L=0;
    while(k<p_len)
    {
        if(pattern[k]==pattern[L])f[k++]=++L;
        else
        {
            if(L)L=f[L-1];
            else f[k++]=0;
        }
    }
}
int KMP_match(string text,string pattern)
{
    int i=0,j=0;
    int ln1=text.size();
    int ln2=pattern.size();
    while(i<ln1)
    {
        if(text[i]==pattern[j])
        {
            i++;
            j++;
            if(j==ln2)
            {
                return 1;
                break;
            }
        }
        else
        {
            if(j)j=f[j-1];
            else i++;
        }
    }
    return 0;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        string text,pattern;
        getline(cin,text);
        scanf("%d",&m);
        getchar();
        for(int i=0; i<m; i++)
        {
            getline(cin,pattern);
            long ln=pattern.size();
            failure_function(pattern,ln);
            int result=KMP_match(text,pattern);
            if(result)printf("y\n");
            else printf("n\n");
        }
    }
    return 0;
}