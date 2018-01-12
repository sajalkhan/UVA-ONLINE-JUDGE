/*---------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10189 Minesweeper
----------------------------------*/
#include<bits/stdc++.h>
using namespace std;

/*--------------------------*/

#define p pair<int,int>
string graph[200];
int X[]= {0,0,1,-1,-1,1,-1,1};
int Y[]= {1,-1,0,0,-1,-1,1,1};
int row,col;

/*--------------------------*/
void bfs()
{
    queue< p >Q;
    int visit[200][200]= {0};
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(!visit[i][j] && graph[i][j]=='*')
            {
                Q.push(p(i,j));
                visit[i][j]=1;
                while(!Q.empty())
                {
                    p u=Q.front();
                    Q.pop();
                    for(int I=0; I<8; I++)
                    {
                        int fx=u.first+X[I];
                        int fy=u.second+Y[I];
                        if((fx>=0 && fx<row) && (fy>=0 && fy<col) && graph[fx][fy]!='*')
                        {
                                visit[fx][fy]=1;
                                if(graph[fx][fy]=='.')graph[fx][fy]='0';
                                graph[fx][fy]++;

                        }
                    }
                }
            }
        }
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int test=0;
    while(scanf("%d %d",&row,&col) && (row || col))
    {
        for(int i=0; i<row; i++)cin>>graph[i];
        bfs();
        if(test)printf("\n");
        printf("Field #%d:\n",++test);
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(graph[i][j]=='.')printf("0");
                else cout<<graph[i][j];
            }
            printf("\n");
        }
    }
    return 0;
}

