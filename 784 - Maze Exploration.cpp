/*--------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 784 - Maze Exploration
---------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

/**--------------------*/
#define p pair<int,int>
int X[]= {0,0,1,-1};
int Y[]= {1,-1,0,0};
string grid[150];
map<int,int>mp;
int row=0,col=0;
/**--------------------*/
void flood()
{
    queue< p >Q;
    int visit[150][150]= {0};
    for(int i=0; i<row-1; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(!visit[i][j] && grid[i][j]=='*')
            {
                grid[i][j]='#';
                visit[i][j]=1;
                Q.push(p(i,j));
                while(!Q.empty())
                {
                    p u=Q.front();
                    Q.pop();
                    for(int I=0; I<4; I++)
                    {
                        int fx=u.first + X[I];
                        int fy=u.second+ Y[I];
                        if((fx>=0 && fx<row-1) && (fy>=0 && fy<mp[i]) && !visit[fx][fy] && (grid[fx][fy]==' ' && grid[fx][fy]!='X'))
                        {
                            visit[fx][fy]=1;
                            grid[fx][fy]=grid[u.first][u.second];
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
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        row=0,col=0;
        string s,L;
        while(getline(cin,s))
        {
            mp[row]=s.size();
            grid[row++]=s;
            if(s[0]=='_')
            {
                flood();
                L=s;
                for(int i=0;i<row-1;i++)
                {
                    for(int j=0;j<mp[i];j++)printf("%c",grid[i][j]);
                    printf("\n");
                }
                cout<<L<<endl;
                break;
            }
            if(col<s.size())col=s.size();
        }
    }
    return 0;
}
/*

2
XXXXXXXXX
X   X   X
X *     X
X   X   X
XXXXXXXXX
X   X
X   X
X   X
XXXXX
_____
XXXXX
X   X
X * X
X   X
XXXXX
_____


*/
