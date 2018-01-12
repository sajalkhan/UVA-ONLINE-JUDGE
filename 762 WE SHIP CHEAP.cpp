/**----------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONL UNIVERSITY
    PROBLEM: UVA 762 WE SHIP CHEAP
------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
map<string,string>parent;
map<string,vector<string> >G;
int bfs(string src,string des)
{
    queue<string>Q;
    map<string,bool>visit;
    visit[src]=1;
    Q.push(src);
    int b=0;
    while(!Q.empty())
    {
        string u=Q.front();
        Q.pop();
        if(u==des)
        {
            b=1;
            break;
        }
        for(int i=0; i<G[u].size(); i++)
        {
            if(!visit[G[u][i]])
            {
                visit[G[u][i]]=1;
                Q.push(G[u][i]);
                parent[G[u][i]]=u;
            }
        }
    }
    return b;
}
int main()
{
    int n,T=0;
    string x,y;
    while(~scanf("%d",&n))
    {
        string s[100000];
        G.clear();
        if(T)printf("\n");
        for(int i=0; i<n; i++)
        {
            cin>>x>>y;
            G[x].pb(y);
            G[y].pb(x);
        }
        cin>>x>>y;
        int result=0,I=0;
        result=bfs(x,y);
        if(!result)printf("No route\n");
        else
        {
            while(x!=y)
            {
                s[I++]=y;
                y=parent[y];
                s[I++]=y;
            }
            for(int i=I-1;i>=0;i-=2)cout<<s[i]<<" "<<s[i-1]<<endl;
        }
        T++;
    }
    return 0;
}
