#include<bits/stdc++.h>
using namespace std;
struct node
{
    int u,v,w;
    bool operator<(const node& p)const
    {
        return w<p.w;
    }
};
int n,m;
vector< node >graph;
int join[1000000];
int find(int n)
{
    if(join[n]==n)return n;
    return join[n]=find(join[n]);
}
int mst(int m,int a)
{
    for(int i=0; i<n+5; i++)join[i]=i;
    int sum=0;
    sort(graph.begin(),graph.end());
    for(int i=0; i<m && graph[i].w<a; i++)
    {
        int u=find(graph[i].u);
        int v=find(graph[i].v);
        if(u!=v)
        {
            join[u]=v;
            sum+=graph[i].w;
        }
    }
    return sum;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,a,x,y,c,test=1;
    scanf("%d",&t);
    while(t--)
    {
        node edge;
        graph.clear();
        scanf("%d %d %d",&n,&m,&a);
        for(int i=0; i<m; i++)
        {
            scanf("%d %d %d",&x,&y,&c);
            edge.u=x;
            edge.v=y;
            edge.w=c;
            graph.push_back(edge);
        }
        int ans=mst(m,a);
        int count=0;
        for(int i=1; i<=n; i++)if(join[i]==i)count++;
        printf("Case #%d: %d %d\n",test++,ans+(count*a),count);
    }
    return 0;
}
/*
2
4 4 100
1 2 10
4 3 12
4 1 41
2 3 23
*/
