/**-------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11631 DARK ROADS
---------------------------------*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int u,v,w;
    bool operator <(const node& p)const
    {
        return w<p.w;
    }
};
vector<node>graph;
int join[1000000];
int find(int s)
{
    if(join[s]==s)return s;
    return join[s]=find(join[s]);
}
int mst(int n)
{
    for(int i=0; i<n; i++)join[i]=i;
    sort(graph.begin(),graph.end());
    int count=0,sum=0;
    int ln=graph.size();
    for(int i=0; i<ln; i++)
    {
        int u=find(graph[i].u);
        int v=find(graph[i].v);
        if(u!=v)
        {
            join[u]=v;
            count++;
            sum+=graph[i].w;
            if(count==n-1)break;
        }
    }
    return sum;
}
int main()
{
    int u,v,n,e,w;
    while(scanf("%d %d",&n,&e) && (n||e))
    {
        node edge;
        graph.clear();
        long total=0;
        for(int i=0; i<e; i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            edge.u=u;
            edge.v=v;
            edge.w=w;
            total+=w;
            graph.push_back(edge);
        }
        total-=mst(n);
        printf("%ld\n",total);
    }
    return 0;
}
/*
7 11
0 1 7
0 3 5
1 2 8
1 3 9
1 4 7
2 4 5
3 4 15
3 5 6
4 5 8
4 6 9
5 6 11
*/

