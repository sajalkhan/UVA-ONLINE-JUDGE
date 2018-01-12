/**----------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 469 WATELANDS OF FLORIDA
-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

/*-----------------------------*/

int row,col;
string graph[150];
#define p pair<int,int>
int X[]= {0,0,1,-1,-1,1,-1,1};
int Y[]= {1,-1,0,0,-1,-1,1,1};

/*-----------------------------*/
int bfs(int i,int j)
{
    int count=0;
    queue< p >Q;
    int visit[150][150]= {0};
    if(!visit[i][j] && graph[i][j]=='W')
    {
        count++;
        visit[i][j]=1;
        Q.push(p(i,j));
        while(!Q.empty())
        {
            p u = Q.front();
            Q.pop();
            for(int I=0; I<8; I++)
            {
                int fx=u.first  + X[I];
                int fy=u.second + Y[I];
                if((fx>=0 && fx<row) && (fy>=0 && fy<col) && !visit[fx][fy] && graph[fx][fy]=='W')
                {
                    count++;
                    visit[fx][fy]=1;
                    Q.push(p(fx,fy));
                }
            }
        }
    }
    return count;
}
int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    getchar();
    while(test--)
    {
        char s[150];
        int ln=0,i=0;
        while(gets(s) && strlen(s)>0)
        {
            if(isdigit(s[0]))
            {
                row=i;
                col=ln;
                stringstream ss(s);
                int n,m;
                while(ss>>n>>m);
                cout<<bfs(n-1,m-1)<<endl;
            }
            else
            {
                ln=strlen(s);
                graph[i++]=s;
            }
        }
        if(test)printf("\n");
    }
    return 0;
}

