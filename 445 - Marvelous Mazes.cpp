/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int ln=s.size();
        if(!ln)printf("\n");
        else
        {
            string s1;
            int num=0;
            for(int i=0;i<ln;i++)
            {
                if(isdigit(s[i]))
                {
                    num+=s[i]-'0';
                    continue;
                }
                if(s[i]=='!')num=0,printf("\n");
                if(s[i]=='b')for(int j=0;j<num;j++)printf(" ");
                s1=s[i];
                if(s[i]!='!' && s[i]!='b')for(int j=0;j<num;j++)cout<<s1;
                num=0;
            }
            printf("\n");
        }
    }
    return 0;
}