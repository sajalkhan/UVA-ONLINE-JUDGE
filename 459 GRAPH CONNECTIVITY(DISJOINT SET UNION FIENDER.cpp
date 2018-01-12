/**-----------------------------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 459 GRAPH CONNECTIVITY(DISJOINT SET UNION FIENDER)
-------------------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int total;
map<char,char>graph;
char find(char s)
{
    if(graph[s]==s)return s;
    return graph[s]=find(graph[s]);
}
void join(char a,char b)
{
    char x=find(a);
    char y=find(b);
    if(x!=y)
    {
        total++;
        graph[x]=y;
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;
    string s;
    scanf("%d",&t);
    getline(cin,s);
    while(t--)
    {
        cin>>s;
        total=0;
        int item=0;
        for(int i='A';i<=s[0];i++)
        {
            item++;
            graph[i]=i;
        }
        getchar();
        while(getline(cin,s) && s.size())
        {
            join(s[0],s[1]);
        }
        printf("%d\n",item-total);
        if(t)printf("\n");
    }
    return 0;
}
