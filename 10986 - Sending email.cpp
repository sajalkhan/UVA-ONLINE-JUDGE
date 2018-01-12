/*
    AUTHOR : SAJAL KHAN
    PROBLEM: 10986 - Sending email
*/
#include<bits/stdc++.h>
using namespace std;
typedef vector<int>vi;
#define max 55555
#define inf 111111
vector< vi >graph;
vector< vi >cost;
struct node
{
    int city,dist;
    node(int a,int b)
    {
        city=a;
        dist=b;
    }
    bool operator<(const node &p)const
    {
        return dist>p.dist;
    }
};
int dijkstra(int src,int des)
{
    int u,v;
    int d[max];
    priority_queue<node>q;
    for(int i=0;i<max;i++)d[i]=inf;
    q.push(node(src,0));
    d[src]=0;
    while(!q.empty())
    {
        node n=q.top();
        q.pop();
        u=n.city;
        for(int i=0; i<graph[u].size(); i++)
        {
            v=graph[u][i];
            if(d[u]+cost[u][i]<d[v])
            {
                d[v]=d[u]+cost[u][i];
                q.push(node(v,d[v]));
            }
        }
    }
    return d[des];
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n,m,x,y,c,s,d;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d %d",&n,&m,&s,&d);
        graph.assign(n+50,vi());
        cost.assign(n+50,vi());
        for(int i=0; i<m; i++)
        {
            scanf("%d %d %d",&x,&y,&c);
            graph[x].push_back(y);
            graph[y].push_back(x);
            cost[x].push_back(c);
            cost[y].push_back(c);
        }
        int result=dijkstra(s,d);
        if(result==inf)printf("Case #%d: unreachable\n",i);
        else printf("Case #%d: %d\n",i,result);
    }
    return 0;
}
