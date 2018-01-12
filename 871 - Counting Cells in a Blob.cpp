/**---------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 871 - Counting Cells in a Blob
-----------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

/*-----------------*/
#define p pair<int,int>
int X[]={0,0,1,-1,1,1,-1,-1};
int Y[]={1,-1,0,0,1,-1,-1,1};
string grid[30];
int row,col;
/*-----------------*/
int flood()
{
    int count=0;
    queue< p >Q;
    int visit[30][30]={0};
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(!visit[i][j] && grid[i][j]=='1')
            {
                int sum=1;
                visit[i][j]=1;
                Q.push(p(i,j));
                while(!Q.empty())
                {
                    p u=Q.front();
                    Q.pop();
                    for(int I=0;I<8;I++)
                    {
                        int fx=u.first+ X[I];
                        int fy=u.second+Y[I];
                        if((fx>=0 && fx<row) && (fy>=0 && fy<col) && !visit[fx][fy] && grid[fx][fy]=='1')
                        {
                            sum++;
                            visit[fx][fy]=1;
                            Q.push(p(fx,fy));
                        }
                    }
                }
                if(count<sum)count=sum;
            }
        }
    }
    return count;
}
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        row=0,col=0;
        string s;
        while(getline(cin,s) && s.size())
        {
            grid[row++]=s;
            if(!col)col=s.size();
        }
        printf("%d\n",flood());
        if(t)printf("\n");
    }
    return 0;
}
