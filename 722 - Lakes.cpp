///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;

///////////////////////////
#define p pair<int,int>
int X[]= {0,0,1,-1};
int Y[]= {1,-1,0,0};
string grid[105];
int row,col;
///////////////////////////

int bfs(int n,int m)
{
    int count=0;
    queue< p >Q;
    int visit[105][105]= {0};
    if(grid[row-1][col-1]=='0')
    {
        Q.push(p(row-1,col-1));
        visit[row-1][col-1]=1;
        count++;
        while(!Q.empty())
        {
            p u=Q.front();
            Q.pop();
            for(int i=0; i<4; i++)
            {
                int fx=u.first+ X[i];
                int fy=u.second+Y[i];
                if((fx>=0 && fx<n) && (fy>=0 && fy<m) && !visit[fx][fy] && grid[fx][fy]=='0')
                {
                    Q.push(p(fx,fy));
                    visit[fx][fy]=1;
                    count++;
                }
            }
        }
    }
    return count;
}
int main()
{
    int t;
    string s;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        int i=0;
        scanf("%d %d",&row,&col);
        getchar();
        while(getline(cin,s) && s.size())grid[i++]=s;
        printf("%d\n",bfs(i,grid[0].size()));
        if(t)printf("\n");
    }
    return 0;
}
