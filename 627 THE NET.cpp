/**--------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 627 THE NET
----------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef vector<int>v;
vector< v >G;
void bfs(int src,int des)
{
    int b=0;
    queue<int>Q;
    int parent[1000];
    int visit[1000]={0};
    Q.push(src);
    visit[src]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        if(u==des)
        {
            b=1;
            break;
        }
        Q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int V=G[u][i];
            if(!visit[V])
            {
                Q.push(V);
                visit[V]=1;
                parent[V]=u;
            }
        }
    }
    if(b)
    {
        int a[500],i=0;
        while(src!=des)
        {
            a[i++]=des;
            des=parent[des];
        }
        a[i++]=src;
        for(int j=i-1;j>=0;j--)
        {
            if(j==0)printf("%d\n",a[j]);
            else printf("%d ",a[j]);
        }
    }
    else printf("connection impossible\n");
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,q,x,y;
    while(~scanf("%d",&t))
    {
        string s;
        getchar();
        G.assign(t+10,v());
        for(int i=0;i<t;i++)
        {
            cin>>s;
            int x=0,y=0;
            int ln=s.size();
            for(int j=0;j<ln;j++)
            {
                if(s[j]=='-')
                {
                    x=y;
                    y=0;
                }
                else if(isdigit(s[j]))y=y*10+(s[j]-'0');
                if(s[j]==',' || j==ln-1)
                {
                    G[x].push_back(y);
                    y=0;
                }
            }
        }
        scanf("%d",&q);
        printf("-----\n");
        while(q--)
        {
            scanf("%d %d",&x,&y);
            bfs(x,y);
        }
    }
    return 0;
}
