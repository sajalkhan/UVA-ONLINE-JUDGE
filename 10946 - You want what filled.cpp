/**-----------------------------------------*/
//    Author : sajal Khan
//    problem: 10946 You want what filled
/**-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

/*------------------------*/
#define p pair<int,int>
int X[]={0,0,1,-1};
int Y[]={1,-1,0,0};
string graph[60];
int row,col,indx=0;
/*------------------------*/
struct node
{
    char A;
    int  B;
}Map[100000];
bool cmp(node i,node j)
{
    if(i.B==j.B)return i.A<j.A;
    else return i.B>j.B;
}
void bfs(int row,int col)
{
    indx=0;
    queue< p >Q;
    int visit[60][60]={0};
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(!visit[i][j] && graph[i][j]!='.')
            {
                int count=1;
                visit[i][j]=1;
                Q.push(p(i,j));
                char ch=graph[i][j];
                while(!Q.empty())
                {
                    p u=Q.front();
                    Q.pop();
                    for(int I=0;I<4;I++)
                    {
                        int fx=u.first+X[I];
                        int fy=u.second+Y[I];
                        if((fx>=0 && fx<row) && (fy>=0 && fy<col) && !visit[fx][fy] && graph[fx][fy]==ch)
                        {
                            Q.push(p(fx,fy));
                            visit[fx][fy]=1;
                            count++;
                        }
                    }
                }
                Map[indx].A=ch;
                Map[indx].B=count;
                indx++;
            }
        }
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int problem=1;
    while(scanf("%d %d",&row,&col) && (row || col))
    {
        for(int i=0;i<row;i++)cin>>graph[i];
        bfs(row,col);
        printf("Problem %d:\n",problem++);
        sort(Map,Map+indx,cmp);
        for(int i=0;i<indx;i++)printf("%c %d\n",Map[i].A,Map[i].B);
    }
    return 0;
}
