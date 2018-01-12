/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11917 DO YOUR OWN HOMEWORK!
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n,m,d;
    string s;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        map<string,int>mp;
        for(int j=0;j<n;j++)
        {
            cin>>s>>m;
            mp[s]=m;
        }
        scanf("%d",&d);
        cin>>s;
        if(mp[s])
        {
            if(mp[s]<=d)printf("Case %d: Yesss\n",i);
            else if(mp[s]<=d+5)printf("Case %d: Late\n",i);
            else if(mp[s]>d+5)printf("Case %d: Do your own homework!\n",i);
        }
        else printf("Case %d: Do your own homework!\n",i);
    }
    return 0;
}
