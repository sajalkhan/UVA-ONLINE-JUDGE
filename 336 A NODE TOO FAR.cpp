/**---------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATION UNIVERSITY
    PROBLEM: 336 A NODE TOO FAR
-----------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define max 10000
set<int>s;
set<int>::iterator it;
map<int,vector<int> >G;
int bfs(int t,int src)
{
    queue<int>Q;
    int b=0,count=0;
    map<int,bool>visit;
    map<int,int>level;
    Q.push(src);
    visit[src]=1;
    level[src]=0;
    int n=Q.front();
    Q.pop();
    int ln=G[n].size();
    if(ln)
    {
        count++;
        if(t==0)return count;
    }
    for(int i=0; i<ln; i++)
    {
        if(!visit[G[n][i]])
        {
            Q.push(G[n][i]);
            level[G[n][i]]=1;
            visit[G[n][i]]=1;
            count++;
        }
    }
    while(!Q.empty())
    {
        int p=Q.front();
        int ln=G[p].size();
        Q.pop();
        for(int i=0; i<ln; i++)
        {
            if(!visit[G[p][i]])
            {
                visit[G[p][i]]=1;
                level[G[p][i]]=level[p]+1;
                if(level[G[p][i]]>t)
                {
                    b=1;
                    break;
                }
                count++;
                Q.push(G[p][i]);
            }
        }
        if(b)break;
    }
    return count;
}
int main()
{
    int n,x,y,src,t,T=1;
    while(scanf("%d",&n) && n)
    {
        s.clear();
        G.clear();
        for(int i=0; i<n; i++)
        {
            scanf("%d %d",&x,&y);
            s.insert(x);
            s.insert(y);
            G[x].pb(y);
            G[y].pb(x);
        }
        while(scanf("%d %d",&src,&t) && (src!=0 || t!=0))
        {
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",T++,s.size()-bfs(t,src),src,t);
        }
    }
    return 0;
}
/*
16
10 15   15 20   20 25   10 30   30 47   47 50   25 45   45 65
15 35   35 55   20 40   50 55   35 40   55 60   40 60   60 65
35  2   35  3    0  0

14
1 2   2 7   1 3   3 4   3 5   5 10   5 11
4 6   7 6   7 8   7 9   8 9   8  6   6 11
1 1   1 2   3 2   3 3   0 0

0
*/
