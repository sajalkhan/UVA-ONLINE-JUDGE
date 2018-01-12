/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int result=0;
    string s,s1;
    while(cin>>s && s!="E-N-D")
    {
        int size=s.size();
        string s2;
        int sz=0;
        for(int i=0;i<size;i++)
        {
            if(isalpha(s[i])|| s[i]=='-')
            {
                s2+=tolower(s[i]);
                sz++;
            }
        }
        if(result<sz)
        {
            result=sz;
            s1=s2;
        }
    }
    cout<<s1<<endl;
    return 0;
}