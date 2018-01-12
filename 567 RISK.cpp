/**-------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 567 RISK
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define max 101
#define pb push_back
typedef vector<int>vi;
vector< vi >graph;
int bfs(int src,int des)
{
    queue<int>Q;
    int visit[max],level[max];
    memset(visit,0,sizeof(visit));
    Q.push(src);
    visit[src]=1;
    level[src]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        if(u==des)return level[des];
        int ln=graph[u].size();
        for(int i=0;i<ln;i++)
        {
            if(!visit[graph[u][i]])
            {
                visit[graph[u][i]]=1;
                level[graph[u][i]]=level[u]+1;
                Q.push(graph[u][i]);
            }
        }
    }
}
int main()
{
    int n,X,T=1,C=1;
    graph.assign(101,vi());
    while(~scanf("%d",&n))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&X);
            graph[T].pb(X);
            graph[X].pb(T);
        }
        if(T==19)
        {
            int m,x,y;
            scanf("%d",&m);
            printf("Test Set #%d\n",C++);
            for(int i=0;i<m;i++)
            {
                scanf("%d %d",&x,&y);
                printf("%2d to %2d: %d\n",x,y,bfs(x,y));
            }
            graph.assign(n+50,vi());
            printf("\n");
            T=0;
        }
        T++;
    }
    return 0;
}
