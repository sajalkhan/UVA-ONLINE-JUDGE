/*-------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11015 05-2 RENDEZVOUS
--------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define mx 101
#define inf 100000000
int graph[mx][mx];
void graph_clear()
{
    for(int i=1; i<=mx; i++)
    {
        for(int j=1; j<=mx; j++)graph[i][j]=inf;
        graph[i][i]=0;
    }
}
void floyed_warshal(int r)
{
    for(int k=1; k<=r; k++)
    {
        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=r; j++)
            {
                graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
            }
        }
    }
}
int main()
{
    int r,c,u,v,w,test=1;
    while(scanf("%d %d",&r,&c) && (r||c))
    {
        string s[111];
        getchar();
        graph_clear();
        for(int i=0; i<r; i++)cin>>s[i];
        for(int i=0; i<c; i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            graph[u][v]=w;
            graph[v][u]=w;
        }
        floyed_warshal(r);
        int indx=0,sum=0,MX=inf;
        for(int i=1; i<=r; i++)
        {
            sum=0;
            for(int j=1; j<=r; j++)
            {
                sum+=graph[i][j];
            }
            if(MX>sum)
            {
                MX=sum;
                indx=i;
            }
        }
        printf("Case #%d : ",test++);
        cout<<s[indx-1]<<endl;
    }
    return 0;
}
