/**---------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12626 - I LOVE Pizza
-----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    scanf("%d",&t);
    getline(cin,s);
    while(t--)
    {
        cin>>s;
        int a=0,m=0,r=0,g=0,I=0,T=0;
        int count=0;
        int ln=s.size();
        map<char,int>mp;
        map<char,int>:: iterator it;
        for(int i=0; i<ln; i++)mp[s[i]]++;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->first=='A')
            {
                a=1;
                count=(it->second)/3;
                if(!count)break;
            }
            if(it->first=='G')
            {
                g=1;
                if(it->second<count)count=it->second;
                if(!count)break;
            }
            if(it->first=='M')
            {
                m=1;
                if(it->second<count)count=it->second;
                if(!count)break;
            }
            if(it->first=='R')
            {
                r=1;
                int x=(it->second)/2;
                if(x<(count))count=x;
                if(!count)break;
            }
            if(it->first=='I')
            {
                I=1;
                if(it->second<count)count=it->second;
                if(!count)break;
            }
            if(it->first=='T')
            {
                T=1;
                if(it->second<count)count=it->second;
                if(!count)break;
            }
        }
        if(m && r && g && I && T && a)printf("%d\n",count);
        else printf("0\n");
    }
    return 0;
}
