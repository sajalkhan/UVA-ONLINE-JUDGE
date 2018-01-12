/**---------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: 10583 - Ubiquitous Religions
-----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define f(x) (x?x:1)
map<int,int>graph;
int find(int n)
{
    if(!graph[n])return n;
    return graph[n]=find(graph[n]);
}
int join(int n,int m)
{
    int u=find(n);
    int v=find(m);
    if(u!=v)
    {
        graph[u]=v;
        return 1;
    }
    return 0;
}
int main()
{
    int t=1,n,m,x,y;
    while(scanf("%d %d",&n,&m) && (n||m))
    {
        graph.clear();
        int result=0;
        while(m--)
        {
            scanf("%d %d",&x,&y);
            result+=join(x,y);
        }
        printf("Case %d: %d\n",t++,n-result);
    }
    return 0;
}
