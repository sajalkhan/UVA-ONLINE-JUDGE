/**--------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 429 WORD TRANSFORMATION
--------------------------------------**/
#include<bits/stdc++.h>
using namespace std;
map<string, vector<string> >graph;
map<string, vector<string> >::const_iterator it;
int bfs(string src,string des)
{
    queue<string>Q;
    map<string,int>visit;
    Q.push(src);
    visit[src]=0;
    while(!Q.empty())
    {
        string u=Q.front();
        if(u==des)return visit[u];
        Q.pop();
        for(int i=0; i<graph[u].size(); i++)
        {
            if(!visit[graph[u][i]])
            {
                visit[graph[u][i]]=visit[u]+1;
                Q.push(graph[u][i]);
            }
        }
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;
    string space;
    scanf("%d",&t);
    getline(cin,space);
    while(t--)
    {
        string word1;
        graph.clear();
        while(cin>>word1 && word1!="*")
        {
            graph[word1];
            for(it=graph.begin(); it!=graph.end(); it++)
            {
                string word2=it->first;
                if(word2.size()==word1.size())
                {
                    int count=0;
                    int ln=word1.size();
                    for(int i=0; i<ln; i++)
                    {
                        if(word2[i]!=word1[i])count++;
                    }
                    if(count==1)
                    {
                        graph[word1].push_back(word2);
                        graph[word2].push_back(word1);
                    }
                }
            }
        }
        getchar();
        string src,des,word;
        while(getline(cin,word))
        {
            if(!word.size())break;
            stringstream ss(word);
            while(ss>>src>>des);
            cout<<src<<" "<<des<<" "<<bfs(src,des)<<endl;
        }
        if(t)printf("\n");
    }
    return 0;
}
