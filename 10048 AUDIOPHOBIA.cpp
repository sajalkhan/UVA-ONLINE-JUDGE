/*---------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10048 AUDIOPHOBIA
----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define mx 105
#define inf 100000
int graph[mx][mx];
void graph_clear()
{
    for(int i=1;i<mx;i++)
    {
        for(int j=1;j<mx;j++)graph[i][j]=inf;
        graph[i][i]=0;
    }
}
void floyed_warshal(int n)
{
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                graph[i][j]=min(graph[i][j],max(graph[i][k],graph[k][j]));
            }
        }
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int c,s,q,x,y,z,test=0;
    while(scanf("%d %d %d",&c,&s,&q) && (c||s||q))
    {
        graph_clear();
        while(s--)
        {
            scanf("%d %d %d",&x,&y,&z);
            graph[x][y]=z;
            graph[y][x]=z;
        }
        if(test)printf("\n");
        printf("Case #%d\n",++test);
        floyed_warshal(c);
        while(q--)
        {
            scanf("%d %d",&x,&y);
            if(graph[x][y]==inf)printf("no path\n");
            else printf("%d\n",graph[x][y]);
        }
    }
    return 0;
}
