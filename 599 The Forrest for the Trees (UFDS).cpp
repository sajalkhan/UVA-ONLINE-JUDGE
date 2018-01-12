/*----------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 599 The Forrest for the Trees
-----------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define f(x) (x?x:1)
map<char,char>graph;
map<char,int>total;
char find(char ch)
{
    if(!graph[ch])return ch;
    return graph[ch]=find(graph[ch]);
}
char join(char a,char b)
{
    char u=find(a);
    char v=find(b);
    if(u!=v)
    {
        graph[u]=v;
        total[v]=f(total[u])+f(total[v]);
        return total[v];
    }
    return u;
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
        graph.clear();
        total.clear();
        set<char>st,tree;
        string s,G[100];
        int i=0;
        while(cin>>s && s[0]!='*')
        {
            string T;
            int total=join(s[1],s[3]);
            T=s[1];
            T+=s[3];
            G[i++]=T;
            if(total>=2)
            {
                st.insert(s[1]);
                st.insert(s[3]);
            }
        }
        int sz=st.size();
        for(int j=0;j<i;j++)
        {
            string T=G[j];
            tree.insert(join(T[0],T[1]));
        }
        getchar();
        getline(cin,s);
        int ln=s.size(),count=0;
        for(int j=0; j<ln; j++)if(s[j]!=',')count++;
        printf("There are %d tree(s) and %d acorn(s).\n",tree.size(),count-st.size());
    }
    return 0;
}
