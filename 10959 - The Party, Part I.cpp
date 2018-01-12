/**---------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10959 - The Party, Part I
-----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
map<int, vector<int> >graph;
int bfs(int src,int des)
{
    queue<int>Q;
    int level[100000],visit[100000]={0};
    Q.push(src);
    level[src]=0;
    visit[src]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        if(u==des)return level[u];
        Q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(!visit[v])
            {
                visit[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,node,edge,x,y;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        set<int>st;
        set<int>::iterator it;
        scanf("%d %d",&node,&edge);
        graph.clear();
        for(int i=0; i<edge; i++)
        {
            scanf("%d %d",&x,&y);
            graph[x].push_back(y);
            graph[y].push_back(x);
            st.insert(x);
            st.insert(y);
        }
        for(it=st.begin();it!=st.end();it++)
        {
            if(*it==0)continue;
            printf("%d\n",bfs(0,*it));
        }
        if(t)printf("\n");
    }
    return 0;
}
