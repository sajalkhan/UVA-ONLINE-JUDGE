/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int house_number(int n)
{
    map<char,bool>mp;
    stringstream ss;
    ss<<n;
    string s;
    ss>>s;
    int m=1;
    for(int i=0;i<s.size();i++)
    {
        if(!mp[s[i]])mp[s[i]]=true;
        else if(mp[s[i]])
        {
            m=0;
            break;
        }
    }
    return m;
}
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        int result=0;
        for(int i=n;i<=m;i++)
        {
            result+=house_number(i);
        }
        printf("%d\n",result);
    }
    return 0;
}