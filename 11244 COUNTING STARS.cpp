/**------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11244 COUNTING STARS
--------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define p pair<int,int>
int X[]= {1,-1,0,0,-1,-1,1,1};
int Y[]= {0,0,1,-1,-1,1,-1,1};
string star[300];
int r,c;
int bfs()
{
    queue<p>Q;
    int count=0;
    int visit[300][300]= {0};
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            int found=0;
            if(star[i][j]=='*' && !visit[i][j])
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
                        if((fx>=0 && fx<r) && (fy>=0 && fy<c) && star[fx][fy]=='*' && !visit[fx][fy])
                        {
                            found=1;
                            visit[fx][fy]=1;
                            Q.push(p(fx,fy));
                        }
                    }
                }
                if(!found)count++;
            }
        }
    }
    return count;
}
int main()
{
    while(scanf("%d %d",&r,&c) && (r||c))
    {
        for(int i=0; i<r; i++)
        {
            cin>>star[i];
        }
        cout<<bfs()<<endl;
    }
    return 0;
}
