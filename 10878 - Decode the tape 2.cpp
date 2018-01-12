#include<bits/stdc++.h>
using namespace std;
string Base_converter(string s)
{
    string s2;
    long long decimal=0;
    int ln=s.size();
    int power=ln-1;
    for(int i=0; i<ln; i++)
    {
        decimal+=(s[i]-'0')*pow(2,power--);
    }
    s2=decimal;
    return s2;
}
int main()
{
    string s,s1;
    int start=0;
    while(getline(cin,s))
    {
        if(!start && s=="___________")
        {
            start=1;
            continue;
        }
        if( start && s=="___________")break;
        int ln=s.size();
        string s2;
        int b=0;
        for(int i=0;i<ln;i++)
        {
            if(!b && s[i]==' ' || s[i]=='|')continue;
            b=1;
            if(s[i]=='o')s2+='1';
            if(s[i]==' ')s2+='0';
        }
        s1=Base_converter(s2);
        cout<<s1;
    }
    return 0;
}
