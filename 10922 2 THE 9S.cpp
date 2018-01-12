/**------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 10922 2 THE 9S
--------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int mod,total;
int BIG_MOD(string s)
{
    mod=0;
    int R=0;
    int ln=s.size();
    for(int i=0; i<ln; i++)
    {
        mod=(mod*10+s[i]-'0')%9;
        R+=s[i]-'0';
    }
    if(!mod && R>9)
    {
        total++;
        stringstream ss;
        string r;
        ss<<R;
        ss>>r;
        BIG_MOD(r);
    }
}
int main()
{
    string s;
    while(cin>>s && s!="0")
    {
        total=1;
        BIG_MOD(s);
        if(!mod) cout<<s<<" is a multiple of 9 and has 9-degree "<<total<<"."<<endl;
        else cout<<s<<" is not a multiple of 9."<<endl;
    }
    return 0;
}
