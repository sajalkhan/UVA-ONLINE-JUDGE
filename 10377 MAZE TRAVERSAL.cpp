/**-----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10377 MAZE TRAVERSAL
-------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
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
        int x,y,I=0,J=0;
        int row,col;
        string s;
        char dir[]= {'N','E','S','W'};
        int X[]= {-1,0,1,0};
        int Y[]= {0,1,0,-1};
        string grid[150];
        scanf("%d %d",&row,&col);
        getchar();
        for(int i=0; i<row; i++)
        {
            getline(cin,s);
            grid[i]=s;
        }
        scanf("%d %d",&x,&y);
        getchar();
        x-=1;
        y-=1;
        int b=0,close=0;
        while(getline(cin,s))
        {
            int fx,fy;
            int ln=s.size();
            for(int i=0; i<ln; i++)
            {
                if(s[i]=='Q')
                {
                    close=1;
                    break;
                }
                if(s[i]=='R')
                {
                    b=0;
                    if(J && I==3)I=-1;
                    if(!J)
                    {
                        fx=x+X[++I];
                        fy=y+Y[I];
                        J=1;
                        continue;
                    }
                    if(J)
                    {
                        fx=x+X[++I];
                        fy=y+Y[I];
                    }
                }
                if(s[i]=='L')
                {
                    b=0;
                    if(J && I==0)I=4;
                    if(!J)
                    {
                        fx=x+X[3];
                        fy=y+Y[3];
                        I=3;
                        J=1;
                        continue;
                    }
                    if(J)
                    {
                        fx=x+X[--I];
                        fy=y+Y[I];
                    }
                }
                if(s[i]=='F')
                {
                    if(!J && !b)fx=x-1,fy=y;
                    if(!b && grid[fx][fy]!='*' && (fx>=0 && fx<row) && (fy>=0 && fy<col))
                    {
                        b=1;
                        x=fx;
                        y=fy;
                    }
                    else if(b && grid[fx+X[I]][fy+Y[I]]!='*' && (fx+X[I]>=0 && fx+X[I]<row) && (fy+Y[I]>=0 && fy+Y[I]<col))
                    {
                        x=fx+X[I];
                        y=fy+Y[I];
                        fx=x;
                        fy=y;
                    }
                }
            }
            if(close)break;
        }
        printf("%d %d %c\n",x+1,y+1,dir[I]);
        if(t)printf("\n");
    }
    return 0;
}
/*
2

7 8
********
* * * **
* *    *
* * ** *
* * *  *
*   * **
********
2 4
RRFLFF FFR
FF
RFFQ
*/
