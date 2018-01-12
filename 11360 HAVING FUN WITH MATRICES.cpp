/*----------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11360 HAVING FUN WITH MATRICES
-----------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int a[20][20],b[20][20];
void row(int x,int y,int n)
{
    for(int i=1; i<=n; i++)
    {
        int r1=a[x][i];
        int r2=a[y][i];
        a[x][i]=r2;
        a[y][i]=r1;
        b[x][i]=r2;
        b[y][i]=r1;
    }
}
void col(int x,int y,int n)
{
    for(int i=1; i<=n; i++)
    {
        int r1=a[i][x];
        int r2=a[i][y];
        a[i][x]=r2;
        a[i][y]=r1;
        b[i][x]=r2;
        b[i][y]=r1;
    }
}
void inc(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j]++;
            if(a[i][j]==10)a[i][j]=0;
            b[i][j]=a[i][j];
        }
    }
}
void dec(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j]--;
            if(a[i][j]==-1)a[i][j]=9;
            b[i][j]=a[i][j];
        }
    }
}
void transpose(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[j][i]=b[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)b[i][j]=a[i][j];
    }
}
void display(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n,m,x,y,test=1;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        scanf("%d",&n);
        getchar();
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            for(int j=1; j<=n; j++)
            {
                a[i][j]=s[j-1]-'0';
                b[i][j]=a[i][j];
            }
        }
        scanf("%d",&m);
        getchar();
        while(m--)
        {
            cin>>s;
            if(s=="row")
            {
                scanf("%d %d",&x,&y);
                row(x,y,n);
            }
            if(s=="col")
            {
                scanf("%d %d",&x,&y);
                col(x,y,n);
            }
            if(s=="inc")inc(n);
            if(s=="dec")dec(n);
            if(s=="transpose")transpose(n);
        }
        printf("Case #%d\n",test++);
        display(n);
        printf("\n");
    }
    return 0;
}
