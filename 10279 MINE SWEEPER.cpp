/*---------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10279 MINE SWEEPER
-----------------------------------*/

#include<bits/stdc++.h>
using namespace std;

/**------------------------------*/
#define p pair<int,int>
string grid[15];
int X[]= {0,0,1,-1,-1,1,1,-1};
int Y[]= {1,-1,0,0,-1,-1,1,1};
int r;
/**------------------------------*/

void flood()
{
    queue< p >Q;
    int visit[15][15]= {0};
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            if(!visit[i][j] && grid[i][j]=='*')
            {
                visit[i][j]=1;
                Q.push(p(i,j));
                while(!Q.empty())
                {
                    p u=Q.front();
                    Q.pop();
                    for(int I=0; I<8; I++)
                    {
                        int fx=u.first  +  X[I];
                        int fy=u.second +  Y[I];
                        if((fx>=0 && fx<r) && (fy>=0 && fy<r))
                        {
                            if(grid[fx][fy]=='.')grid[fx][fy]='0';
                            if(grid[fx][fy]!='*')grid[fx][fy]++;
                            if(grid[fx][fy]=='*' && !visit[fx][fy])Q.push(p(fx,fy));
                            visit[fx][fy]=1;
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
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        scanf("%d",&r);
        string check[15];
        for(int i=0; i<r; i++)cin>>grid[i];
        for(int i=0; i<r; i++)cin>>check[i];
        flood();
        int yes=0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<r; j++)
            {
                if(check[i][j]=='x' && grid[i][j]=='*')
                {
                    yes=1;
                    break;
                }
            }
        }
        if(!yes)
        {
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<r;j++)
                {
                    if(check[i][j]=='x' && grid[i][j]=='.')printf("0");
                    else if(check[i][j]=='x' && grid[i][j]!='.')printf("%c",grid[i][j]);
                    else printf("%c",check[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<r;j++)
                {
                    if(check[i][j]=='x' && grid[i][j]=='.')printf("0");
                    else if(check[i][j]=='x' && isdigit(grid[i][j]))printf("%c",grid[i][j]);
                    else if(check[i][j]=='x' && grid[i][j]=='*')printf("*");
                    else if(check[i][j]=='.' && grid[i][j]=='*')printf("*");
                    else printf("%c",check[i][j]);
                }
                printf("\n");
            }
        }
        if(t)printf("\n");
    }
    return 0;
}

