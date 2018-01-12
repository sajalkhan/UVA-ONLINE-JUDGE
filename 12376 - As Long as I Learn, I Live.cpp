/**-------------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12376 - As Long as I Learn, I Live
---------------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

/*---------------------------*/
int G[150];
#define p pair<int,int>
map<int,vector<int> >graph;
/*---------------------------*/
p bfs(int src)
{
    int last;
    int mx=0;
    int sum=0;
    queue<int>Q;
    int visit[150]= {0};
    Q.push(src);
    visit[src]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        mx=0;
        int ln=graph[u].size();
        for(int i=0; i<ln; i++)
        {
            int v=graph[u][i];
            if(mx<G[v])
            {
                mx=G[v];
                last=v;
            }
        }
        if(mx)Q.push(last);
        sum+=mx;
    }
    return p(sum,last);
}
int main()
{
    int t,test=1;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        int node,edge,u,v,n;
        scanf("%d %d",&node,&edge);
        G[150]= {0};
        graph.clear();
        for(int i=0; i<node; i++)scanf("%d",&G[i]);
        for(int i=0; i<edge; i++)
        {
            scanf("%d %d",&u,&v);
            graph[u].push_back(v);
        }
        p U=bfs(0);
        printf("Case %d: %d %d\n",test++,U.first,U.second);
    }
    return 0;
}




