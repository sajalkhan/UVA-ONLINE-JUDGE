/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12820 COOL WORD
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,I=1;
    while(~scanf("%d",&t))
    {
        string s;
        int count=0;
        for(int i=1; i<=t; i++)
        {
            cin>>s;
            int ln=s.size();
            map<char,int>mp;
            map<char,int>::iterator it;
            for(int j=0; j<ln; j++)mp[s[j]]++;
            if(mp.size()>=2)
            {
                int visit[10010]= {0},b=0;
                for(it=mp.begin(); it!=mp.end(); it++)
                {
                    if(!visit[it->second])visit[it->second]=1;
                    else
                    {
                        b=1;
                        break;
                    }
                }
                if(!b)count++;
            }
        }
        printf("Case %d: %d\n",I++,count);
    }
    return 0;
}
