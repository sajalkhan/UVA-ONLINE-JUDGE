/**-----------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10608 FRIENDS
-------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define f(x) (x?x:1)
map<int,int>graph;
map<int,int>total;
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
        total[v]=f(total[u])+f(total[v]);
        return total[v];
    }
    return total[u];
}
int main()
{
    int t,n,m,x,y;
    scanf("%d",&t);
    while(t--)
    {
        graph.clear();
        total.clear();
        int result=0;
        scanf("%d %d",&n,&m);
        while(m--)
        {
            scanf("%d %d",&x,&y);
            int R=join(x,y);
            if(result<R)result=R;
        }
        printf("%d\n",result);
    }
    return 0;
}
