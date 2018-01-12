/*-------------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 599 THE FORREST FOR THE TREES(BFS)
---------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
map<char,vector<char> >graph;
map<char,int>visit;
int bfs(char src)
{
    queue<char>Q;
    if(!visit[src])
    {
        Q.push(src);
        visit[src]=1;
        while(!Q.empty())
        {
            char u=Q.front();
            Q.pop();
            for(int i=0; i<graph[u].size(); i++)
            {
                char v=graph[u][i];
                if(!visit[v])
                {
                    visit[v]=1;
                    Q.push(v);
                }
            }
        }
        if(graph[src].size()>=1)return 1;
        return 0;
    }
    return 0;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        string s;
        set<char>st;
        graph.clear();
        visit.clear();
        while(cin>>s && s[0]!='*')
        {
            if(s[1]!=s[3])
            {
                graph[s[1]].push_back(s[3]);
                graph[s[3]].push_back(s[1]);
                st.insert(s[1]);
                st.insert(s[3]);
            }
        }
        getchar();
        getline(cin,s);
        int ln=s.size(),tree=0,count=0;
        for(int i=0; i<ln; i++)
        {
            if(s[i]!=',')
            {
                count++;
                tree+=bfs(s[i]);
            }
        }
        printf("There are %d tree(s) and %d acorn(s).\n",tree,count-st.size());
    }
    return 0;
}
