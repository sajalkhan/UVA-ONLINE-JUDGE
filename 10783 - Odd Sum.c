/// 10783 - Odd Sum
#include<stdio.h>
int main()
{
    int t,n,m,sum=0;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
    {
        sum=0;
        int j;
        scanf("%d %d",&n,&m);
        for(j=n;j<=m;j++)
        {
            if(j%2==1)
            {
                sum=sum+j;
            }
        }
        printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}
