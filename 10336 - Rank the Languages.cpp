/**-----------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10336 - Rank the Languages
-------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

/**-------------------*/
#define p pair<int,int>
int X[]= {0,0,1,-1};
int Y[]= {1,-1,0,0};
string grid[150];
map<char,int>mp;
map<char,int>::iterator it;
int row,col;
/**-------------------*/

struct node
{
    char w;
    int num;
}word[150];
bool cmp(node i,node j)
{
    if(i.num==j.num)return i.w<j.w;
    else return i.num>j.num;
}
void flood()
{
    queue< p >Q;
    int visit[150][150]={0};
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(!visit[i][j])
            {
                mp[grid[i][j]]++;
                visit[i][j]=1;
                Q.push(p(i,j));
                while(!Q.empty())
                {
                    p u=Q.front();
                    Q.pop();
                    for(int I=0;I<4;I++)
                    {
                        int fx=u.first+ X[I];
                        int fy=u.second+Y[I];
                        if((fx>=0 && fx<row) && (fy>=0 && fy<col) && !visit[fx][fy] && grid[fx][fy]==grid[u.first][u.second])
                        {
                            visit[fx][fy]=1;
                            Q.push(p(fx,fy));
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    int t,test=1;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int x=0;
        mp.clear();
        scanf("%d %d",&row,&col);
        getchar();
        for(int i=0;i<row;i++)cin>>grid[i];
        flood();
        for(it=mp.begin();it!=mp.end();it++)
        {
            word[x].w=it->first;
            word[x].num=it->second;
            x++;
        }
        sort(word,word+x,cmp);
        printf("World #%d\n",test++);
        for(int i=0;i<x;i++)cout<<word[i].w<<": "<<word[i].num<<endl;
    }
    return 0;
}

/*
2
4 8
ttuuttdd
ttuuttdd
uuttuudd
uuttuudd
9 9
bbbbbbbbb
aaaaaaaab
bbbbbbbab
baaaaacab
bacccccab
bacbbbcab
bacccccab
baaaaaaab
bbbbbbbbb
*/
