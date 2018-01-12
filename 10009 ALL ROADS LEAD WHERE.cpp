/**-------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10009 ALL ROADS LEAD WHERE?
---------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
map<string,vector<string> >G;
void bfs(string src,string des)
{
    queue<string>Q;
    map<string,bool>visit;
    map<string,string>parent;
    visit[src]=1;
    Q.push(src);
    while(!Q.empty())
    {
        string u=Q.front();
        Q.pop();
        if(u==des)break;
        for(int i=0;i<G[u].size();i++)
        {
            if(!visit[G[u][i]])
            {
                visit[G[u][i]]=1;
                Q.push(G[u][i]);
                parent[G[u][i]]=u;
            }
        }
    }
    string result;
    result=toupper(des[0]);
    while(parent[des].size())
    {
        string s=parent[des];
        result+=toupper(s[0]);
        des=parent[des];
        parent[des];
    }
    reverse(result.begin(),result.end());
    cout<<result<<endl;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string s,x,y;
    int t,n,m;
    scanf("%d",&t);
    getline(cin,s);
    for(int I=0;I<t;I++)
    {
        if(I)printf("\n");
        G.clear();
        scanf("%d %d",&n,&m);
        getline(cin,s);
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        getchar();
        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            bfs(x,y);
        }
    }
    return 0;
}
