/**----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11588 IMAGE COADING
------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,test=1,r,c,n,m;
    scanf("%d",&t);
    while(t--)
    {
        char ch;
        string space;
        map<char,int>mp;
        map<char,int>::iterator it;
        scanf("%d %d %d %d",&r,&c,&n,&m);
        getline(cin,space);
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                scanf("%c",&ch);
                mp[ch]++;
            }
            getchar();
        }
        int max=0,result=0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(max<it->second)max=it->second;
        }
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second==max)result+=max*n;
            else result+=(it->second)*m;
        }
        printf("Case %d: %d\n",test++,result);
    }
    return 0;
}
