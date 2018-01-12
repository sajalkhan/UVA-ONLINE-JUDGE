/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    AUTHOR : SAJAL KHAN
    PROBLEM: 260 - Il Gioco dell'X
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include<bits/stdc++.h>
using namespace std;

/**-------------------------------*/
int row;
string grid[205];
#define p pair<int,int>
int X[]= {-1,0,1,-1,0,1};
int Y[]= {-1,-1,0,0,1,1};
/**-------------------------------*/
char flood()
{
    int i=0;
    queue< p >Q;
    int visit[205][205]= {0};
    for(int j=0; j<row; j++)
    {
        if(!visit[i][j])
        {
            visit[i][j]=1;
            Q.push(p(i,j));
            while(!Q.empty())
            {
                p u=Q.front();
                Q.pop();
                for(int I=0; I<6; I++)
                {
                    int fx=u.first+ X[I];
                    int fy=u.second+Y[I];
                    if((fx>=0 && fx<row) && (fy>=0 && fy<row) && !visit[fx][fy] && grid[fx][fy]==grid[u.first][u.second])
                    {
                        visit[fx][fy]=1;
                        Q.push(p(fx,fy));
                    }
                }
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        if(visit[row-1][i] && grid[row-1][i]=='b')return 'B';
    }
    return 'W';
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int test=1;
    while(scanf("%d",&row) && row!=0)
    {
        for(int i=0; i<row; i++)cin>>grid[i];
        printf("%d %c\n",test++,flood());
    }
    return 0;
}

