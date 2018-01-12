/**-----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 352 THE SEASONAL WAR
------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

/*-----------------------------*/

int row;
string graph[50];
#define p pair<int,int>
int X[]= {0,0,1,-1,-1,1,-1,1};
int Y[]= {1,-1,0,0,-1,-1,1,1};

/*-----------------------------*/
int bfs()
{
    int count=0;
    queue< p >Q;
    int visit[50][50]={0};
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(!visit[i][j] && graph[i][j]=='1')
            {
                count++;
                visit[i][j]=1;
                Q.push(p(i,j));
                while(!Q.empty())
                {
                    p u = Q.front();
                    Q.pop();
                    for(int I=0;I<8;I++)
                    {
                        int fx=u.first  + X[I];
                        int fy=u.second + Y[I];
                        if((fx>=0 && fx<row) && (fy>=0 && fy<row) && !visit[fx][fy])
                        {
                            visit[fx][fy]=1;
                            if(graph[fx][fy]=='1')Q.push(p(fx,fy));
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
    int test=1;
    while(~scanf("%d",&row))
    {
        for(int i=0;i<row;i++)cin>>graph[i];
        int war=bfs();
        printf("Image number %d contains %d war eagles.\n",test++,war);
    }
    return 0;
}
