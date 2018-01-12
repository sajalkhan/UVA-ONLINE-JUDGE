#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,c=2;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d",&n,&m);
        if(i>0)printf("\n");
        for(int i=0; i<m; i++)
        {
            if(i)printf("\n");
            c=2;
            for(int i=1; i<=(n*2)-1; i++)
            {
                if(i<=n)
                {
                    for(int j=1; j<=i; j++)
                    {
                        printf("%d",i);
                    }
                }
                else
                {
                    int r=i-c;
                    for(int j=1; j<=r; j++)
                    {
                        printf("%d",r);
                    }
                    c+=2;
                }
                printf("\n");
            }
        }
    }
    return 0;
}
