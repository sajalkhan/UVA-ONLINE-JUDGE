#include<bits/stdc++.h>
using namespace std;

#define max 1001
#define p pair<int,int>
int G[max][max],D[max][max],visit[max][max];
int X[]= {1,-1,0,0},r;
int Y[]= {0,0,1,-1},c;
void bfs(int x,int y)
{
    queue<p>Q;
    Q.push(p(x,y));
    visit[x][y]=1;
    D[x][y]=0;
    while(!Q.empty())
    {
        p u=Q.front();
        Q.pop();
        for(int i=0; i<4; i++)
        {
            int fx=u.first+X[i];
            int fy=u.second+Y[i];
            if((fx>=0 && fx<r) && (fy>=0 && fy<c) && (!visit[fx][fy]) && G[fx][fy]==0)
            {
                visit[fx][fy]=1;
                D[fx][fy]=D[u.first][u.second]+1;
                Q.push(p(fx,fy));
            }
        }
    }
}
int main()
{
    int d,x,y,z,s1,s2,e1,e2;
    while(scanf("%d %d",&r,&c) && (r||c))
    {
        scanf("%d",&d);
        memset(G,0,sizeof(G));
        memset(D,0,sizeof(D));
        memset(visit,0,sizeof(visit));
        for(int i=0; i<d; i++)
        {
            scanf("%d %d",&x,&y);
            for(int j=0; j<y; j++)
            {
                scanf("%d",&z);
                G[x][z]=1;
            }
        }
        scanf("%d %d",&s1,&s2);
        bfs(s1,s2);
        scanf("%d %d",&e1,&e2);
        printf("%d\n",D[e1][e2]);
    }
    return 0;
}
/*
10  10
9
0  1  2
1  1  2
2  2  2  9
3  2  1  7
5  3  3  6  9
6  4  0  1  2  7
7  3  0  3  8
8  2  7  9
9  3  2  3  4
0  0
9  9
*/
