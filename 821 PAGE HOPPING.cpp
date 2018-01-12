/**-------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 821 PAGE HOPPING
--------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int total=0;
map<int,vector<int> >graph;
int bfs(int src)
{
    queue<int>Q;
    int level[100000];
    int visit[100000]={0};
    visit[src]=1;
    Q.push(src);
    level[src]=0;
    int result=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(!visit[v])
            {
                total++;
                visit[v]=1;
                result+=level[v]=level[u]+1;
                Q.push(v);
            }
        }
    }
    return result;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int x,y,n1,n2,test=1;
    while(scanf("%d %d",&x,&y) && (x||y))
    {
        graph.clear();
        set<int>st;
        set<int>::iterator it;
        graph[x].push_back(y);
        st.insert(x);
        st.insert(y);
        while(scanf("%d %d",&n1,&n2) && (n1||n2))
        {
            graph[n1].push_back(n2);
            st.insert(n1);
            st.insert(n2);
        }
        double result=0.0;
        for(it=st.begin();it!=st.end();it++)
        {
            result+=bfs(*it);
        }
        int ln=st.size();
        printf("Case %d: average length between pages = %.3lf clicks\n",test++,result/total);
        total=0;
    }
    return 0;
}
