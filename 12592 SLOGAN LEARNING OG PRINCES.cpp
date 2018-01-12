/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12592 SLOGAN LEARNING OG PRINCES
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s1,s2;
    scanf("%d",&t);
    getchar();
    map<string,string>mp;
    while(t--)
    {
        getline(cin,s1);
        getline(cin,s2);
        mp[s1]=s2;
    }
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        getline(cin,s1);
        cout<<mp[s1]<<endl;
    }
    return 0;
}
