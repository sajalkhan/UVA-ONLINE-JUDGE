/**------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10116 - Robot Motion
-------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define p pair<int,int>
int row,col,position;
string graph[1000];

int N1[]= {-1};
int N2[]= {0};
int S1[]= {1};
int S2[]= {0};
int E1[]= {0};
int E2[]= {1};
int W1[]= {0};
int W2[]= {-1};

void bfs()
{
    int b=0;
    queue<p>Q;
    map<p,int>mp;
    int start=0,count=0;
    int visit[100][100]= {0};

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(!i && j==position-1)start=1;
            if(start)
            {
                if(!visit[i][j])
                {
                    Q.push(p(i,j));
                    visit[i][j]=1;
                    while(!Q.empty())
                    {
                        p u=Q.front();
                        Q.pop();
                        int R=u.first;
                        int C=u.second;
                        char cr=graph[R][C];
                        if(cr=='N')
                        {
                            count++;
                            mp[p(R,C)]=count;
                            int fx=R+N1[0];
                            int fy=C+N2[0];
                            if(!visit[fx][fy]  || fx==-1 || fy==-1)
                            {
                                if((fx>=0 && fx<row) && (fy>=0 && fy<col))
                                {
                                    visit[fx][fy]=1;
                                    Q.push(p(fx,fy));
                                }
                                else
                                {
                                    printf("%d step(s) to exit\n",count);
                                    b=1;
                                    break;
                                }
                            }
                            else
                            {
                                int m=count-mp[p(fx,fy)];
                                printf("%d step(s) before a loop of %d step(s)\n",mp[p(fx,fy)]-1,m+1);
                                b=1;
                                break;
                            }
                        }
                        if(cr=='S')
                        {
                            count++;
                            mp[p(R,C)]=count;
                            int fx=R+S1[0];
                            int fy=C+S2[0];
                            if(!visit[fx][fy]  || fx==-1 || fy==-1)
                            {
                                if((fx>=0 && fx<row) && (fy>=0 && fy<col))
                                {
                                    visit[fx][fy]=1;
                                    Q.push(p(fx,fy));
                                }
                                else
                                {
                                    printf("%d step(s) to exit\n",count);
                                    b=1;
                                    break;
                                }
                            }
                            else
                            {
                                int m=count-mp[p(fx,fy)];
                                printf("%d step(s) before a loop of %d step(s)\n",mp[p(fx,fy)]-1,m+1);
                                b=1;
                                break;
                            }
                        }
                        if(cr=='E')
                        {
                            count++;
                            mp[p(R,C)]=count;
                            int fx=R+E1[0];
                            int fy=C+E2[0];
                            if(!visit[fx][fy]  || fx==-1 || fy==-1)
                            {
                                if((fx>=0 && fx<row) && (fy>=0 && fy<col))
                                {
                                    visit[fx][fy]=1;
                                    Q.push(p(fx,fy));
                                }
                                else
                                {
                                    printf("%d step(s) to exit\n",count);
                                    b=1;
                                    break;
                                }
                            }
                            else
                            {
                                int m=count-mp[p(fx,fy)];
                                printf("%d step(s) before a loop of %d step(s)\n",mp[p(fx,fy)]-1,m+1);
                                b=1;
                                break;
                            }
                        }
                        if(cr=='W')
                        {
                            count++;
                            mp[p(R,C)]=count;
                            int fx=R+W1[0];
                            int fy=C+W2[0];
                            if(!visit[fx][fy] || fx==-1 || fy==-1)
                            {
                                if((fx>=0 && fx<row) && (fy>=0 && fy<col))
                                {
                                    visit[fx][fy]=1;
                                    Q.push(p(fx,fy));
                                }
                                else
                                {
                                    printf("%d step(s) to exit\n",count);
                                    b=1;
                                    break;
                                }
                            }
                            else
                            {
                                int m=count-mp[p(fx,fy)];
                                printf("%d step(s) before a loop of %d step(s)\n",mp[p(fx,fy)]-1,m+1);
                                b=1;
                                break;
                            }
                        }
                    }
                    if(b)break;
                }
            }
            if(b)break;
        }
        if(b)break;
    }
}
int main()
{
    while(scanf("%d %d %d",&row,&col,&position) && (row || col || position))
    {
        getchar();
        for(int i=0; i<row; i++)cin>>graph[i];
        bfs();
    }
    return 0;
}
