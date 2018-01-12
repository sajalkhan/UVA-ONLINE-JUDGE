/*---------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 793 NETWORK CONNECTIONS
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define mx 10000
int graph[mx];
void graph_creat(int n)
{
    for(int i=0;i<n+50;i++)graph[i]=i;
}
int find(int n)
{
    if(graph[n]==n)return n;
    return graph[n]=find(graph[n]);
}
int join(int a,int b,char ch)
{
    int u=find(a);
    int v=find(b);
    if(u!=v && ch=='c')graph[u]=v;
    if(u!=v && ch=='q')return 0;
    else return 1;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,computer;
    string s;
    scanf("%d",&t);
    getline(cin,s);
    while(t--)
    {
        int yes=0,no=0;
        scanf("%d",&computer);
        graph_creat(computer);
        getline(cin,s);
        while(getline(cin,s) && s.size())
        {
            stringstream ss(s);
            char ch;
            int u,v;
            while(ss>>ch>>u>>v);
            if(ch=='c')join(u,v,ch);
            if(ch=='q')
            {
                int result=join(u,v,ch);
                if(result)yes++;
                else no++;
            }
        }
        printf("%d,%d\n",yes,no);
        if(t)printf("\n");
    }
    return 0;
}
