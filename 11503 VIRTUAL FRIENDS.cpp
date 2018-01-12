/**-----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11503 VIRTUAL FRIENDS
-------------------------------------*/
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
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        graph.clear();
        total.clear();
        string f1,f2;
        scanf("%d",&n);
        while(n--)
        {
            cin>>f1>>f2;
            cout<<join(f1,f2)<<endl;
        }
    }
    return 0;
}
