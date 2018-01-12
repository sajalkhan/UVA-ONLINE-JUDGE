
/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11953 BATTLESHIPS
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>p;
int X[]={1,-1,0,0};
int Y[]={0,0,-1,1};
string s[200];
int row;
int bfs()
{
    queue<p>Q;
    int count=0;
    int visit[200][200]={0};
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(!visit[i][j] && (s[i][j]=='x'))
            {
                count++;
                visit[i][j]=1;
                Q.push(p(i,j));
                while(!Q.empty())
                {
                    p u=Q.front();
                    Q.pop();
                    for(int I=0;I<4;I++)
                    {
                        int fx=u.first+X[I];
                        int fy=u.second+Y[I];
                        if((fx>=0 && fx<row) && (fy>=0 && fy<row) && (!visit[fx][fy]) && (s[fx][fy]=='x'||s[fx][fy]=='@'))
                        {
                            visit[fx][fy]=1;
                            Q.push(p(fx,fy));
                        }
                    }
                }
            }
        }
    }
    return count;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&row);
        for(int j=0;j<row;j++)cin>>s[j];
        printf("Case %d: %d\n",i,bfs());
    }
    return 0;
}
