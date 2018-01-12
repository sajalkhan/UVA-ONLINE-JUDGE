/**---------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: uva 10685 - Nature
----------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define f(x) (x?x:1)
map<string,string>graph;
map<string,int>total;
string find(string s)
{
    if(graph[s]=="")return s;
    return graph[s]=find(graph[s]);
}
int join(string a,string b)
{
    string u=find(a);
    string v=find(b);
    if(u!=v)
    {
        graph[u]=v;
        total[v]=f(total[u])+f(total[v]);
        return total[v];
    }
    return total[u];
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int c,r;
    while(scanf("%d %d",&c,&r) && (c||r))
    {
        graph.clear();
        total.clear();
        string f1,f2;
        getchar();
        for(int i=0;i<c;i++)cin>>f1;
        int result=1;
        while(r--)
        {
            cin>>f1>>f2;
            int r=join(f1,f2);
            if(result<r)result=r;
        }
        printf("%d\n",result);
    }
    return 0;
}
