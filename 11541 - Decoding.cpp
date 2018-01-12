/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        string s1,s2;
        int ln=s.size();
        for(int j=0;j<ln;j++)
        {
            if(isalpha(s[j]))s1+=s[j],s2=s[j];
            else
            {
                int m=0;
                while(!isalpha(s[j]) && j<ln)
                {
                    m=m*10+s[j]-'0';
                    ++j;
                }
                --j;
                for(int k=0;k<m-1;k++)
                {
                    s1+=s2;
                }
            }
        }
        printf("Case %d: ",i);
        cout<<s1<<endl;
    }
    return 0;
}