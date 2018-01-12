/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s && s!="0")
    {
        int result=0;
        for(int i=0;i<s.size();i++)
        {
            result=(result*10+s[i]-'0')%17;
        }
        if(result==0)printf("1\n");
        else printf("0\n");
    }
    return 0;
}