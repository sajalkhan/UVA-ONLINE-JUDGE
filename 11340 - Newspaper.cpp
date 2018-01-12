/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,L,cents,line;
    map<char,int>mp;
    char c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        mp.clear();
        cin>>L;
        getchar();
        for(int j=0;j<L;j++)
        {
           cin>>c>>cents;
           mp[c]=cents;
        }
        cin>>line;
        getchar();
        string s;
        double result=0;
        for(int k=0;k<line;k++)
        {
            getline(cin,s);
            int size=s.size();
            for(int i=0;i<size;i++)if(mp[s[i]])result+=mp[s[i]];
        }
        printf("%0.2lf$\n",result/100);
    }
    return 0;
}