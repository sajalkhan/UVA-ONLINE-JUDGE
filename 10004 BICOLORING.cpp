/**-----------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 10004 BICOLORING
-------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define max 10000
set<int>s;
set<int>::iterator it;
typedef vector<int>vi;
vector< vi >G;
void bfs(int n,int src)
{
    int b=0;
    queue<int>Q;
    int visit[10000];
    memset(visit,-1,sizeof(visit));
    Q.push(src);
    visit[src]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        int ln=G[u].size();
        for(int i=0; i<ln; i++)
        {
            if(visit[G[u][i]]==-1)
            {
                if(visit[u]==0)visit[G[u][i]]=1;
                else visit[G[u][i]]=0;
                Q.push(G[u][i]);
            }
            else
            {
                if(visit[G[u][i]]==visit[u])
                {
                    b=1;
                    break;
                }
            }
        }
        if(b)break;
    }
    if(b)printf("NOT BICOLORABLE.\n");
    else printf("BICOLORABLE.\n");
}
int main()
{
    int n,e,x,y,b;
    while(scanf("%d",&n) && n)
    {
        b=0;
        s.clear();
        G.assign(n+5,vi());
        scanf("%d",&e);
        for(int i=0; i<e; i++)
        {
            scanf("%d %d",&x,&y);
            if(x==y)
            {
                b=1;
                break;
            }
            s.insert(x);
            G[x].pb(y);
            G[y].pb(x);
        }
        it=s.begin();
        bfs(n,*it);
    }
    return 0;
}
