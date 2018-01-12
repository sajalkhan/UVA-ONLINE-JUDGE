/**
	MD.SOHARUB HOSSEN
	DAFFODIL INTERNATIONAL UNIVERSITY
	PROBLEM: UVA 572 OIL DEPOSITS
*/
#include<bits/stdc++.h>
using namespace std;

#define p pair<int,int>
int X[]= {1,-1,0,0,-1,-1,1,1};
int Y[]= {0,0,1,-1,-1,1,-1,1};
string s[200];
int r,c;
int bfs()
{
    queue<p>Q;
    int count=0;
    int visit[200][200]= {0};
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(s[i][j]=='@' && !visit[i][j])
            {
                count++;
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
                        if((fx>=0 && fx<r) && (fy>=0 && fy<c) && s[fx][fy]=='@' && !visit[fx][fy])
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
    while(scanf("%d %d",&r,&c) && (r||c))
    {
        for(int i=0; i<r; i++)
        {
            cin>>s[i];
        }
        cout<<bfs()<<endl;
    }
    return 0;
}
