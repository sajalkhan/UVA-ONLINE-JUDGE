/**-------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 459 GRAPH CONNECTIVITY
---------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
map<char,vector<char> >G;
map<char,bool>visit;
int bfs(char src)
{
    queue<char>Q;
    Q.push(src);
    if(!visit[src])
    {
        visit[src]=1;
        while(!Q.empty())
        {
            char u=Q.front();
            Q.pop();
            for(int i=0; i<G[u].size(); i++)
            {
                if(!visit[G[u][i]])
                {
                    visit[G[u][i]]=1;
                    Q.push(G[u][i]);
                }
            }
        }
        return 1;
    }
    else
    {
        Q.pop();
        return 0;
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n;
    string s,c;
    scanf("%d",&t);
    getline(cin,s);
    while(t--)
    {
        G.clear();
        visit.clear();
        cin>>c;
        int result=0;
        getchar();
        while(getline(cin,s) && s.size())
        {
            G[s[0]].push_back(s[1]);
            G[s[1]].push_back(s[0]);
        }
        for(int i=65; i<=c[0]; i++)result+=bfs(char(i));
        printf("%d\n",result);
        if(t)printf("\n");
    }
    return 0;
}
