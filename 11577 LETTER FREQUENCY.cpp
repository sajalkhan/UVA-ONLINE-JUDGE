/**--------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11577 LETTER FREQUENCY
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int j=0;
        getline(cin,s);
        int ln=s.size();
        map<char,int>mp;
        map<char,int>::iterator it;
        for(int i=0; i<ln; i++)
        {
            if(isalpha(s[i]))
            {
                mp[tolower(s[i])]++;
            }
        }
        int max=0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(max<it->second)max=it->second;
        }
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second==max)cout<<it->first;
        }
        printf("\n");
    }
    return 0;
}
