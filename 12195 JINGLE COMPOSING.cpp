/*---------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12195JINGLE COMPOSING
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    map<char,double>mp;
    mp['W']=1.0;
    mp['H']=0.5;
    mp['Q']=0.25;
    mp['E']=0.125;
    mp['S']=0.0625;
    mp['T']=0.03125;
    mp['X']=0.015625;
    while(cin>>s && s!="*")
    {
        int count=0;
        double sum=0;
        int ln=s.size();
        for(int i=1;i<ln;i++)
        {
            sum+=mp[s[i]];
            if(s[i]=='/')
            {
                if(sum==1.0)count++;
                sum=0;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
