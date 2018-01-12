/**---------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11747 HEAVY CYCLE EDGES
-----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int u,v,w;
    node(int a,int b,int c)
    {
        u=a;
        v=b;
        w=c;
    }
    bool operator<(const node &p)const
    {
        return w<p.w;
    }
};
vector< node >graph;
int join[1000000];
vector<int>cost;
int find(int n)
{
    if(join[n]==n)return n;
    return join[n]=find(join[n]);
}
int mst(int n)
{
    sort(graph.begin(),graph.end());
    for(int i=0; i<=n; i++)join[i]=i;
    int count=0,result=0,found=0;
    int ln=graph.size();
    for(int i=0; i<ln; i++)
    {
        int u=find(graph[i].u);
        int v=find(graph[i].v);
        if(u!=v)
        {
            count++;
            join[u]=v;
            int w=graph[i].w;
            if(result<w)result=w;
        }
        else
        {
            found++;
            int w=graph[i].w;
            if(result<w)result=w;
            cost.push_back(result);
            result=0;
        }
    }
    if(!found)return 0;
    else return 1;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,e,u,v,w;
    while(scanf("%d %d",&n,&e) && (n||e))
    {
        graph.clear();
        cost.clear();
        for(int i=0; i<e; i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            graph.push_back(node(u,v,w));
        }
        if(mst(n)==1)
        {
            int ln=cost.size();
            for(int i=0; i<ln; i++)
            {
                if(i==ln-1)printf("%d\n",cost[i]);
                else printf("%d ",cost[i]);
            }
        }
        else printf("forest\n");
    }
    return 0;
}
/*
3 3
0 1 1
1 2 2
2 0 3
4 5
0 1 1
1 2 2
2 3 3
3 1 4
0 2 0
3 1
0 1 1
0 0
*/
