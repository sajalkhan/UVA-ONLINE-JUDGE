#include<stdio.h>
int main()
{
    int t,n,m,sum=0,score=0,result=0,s1=0,s2=0;
    scanf("%d",&t);
    int i;
    for(i=0; i<t; i++)
    {
        scanf("%d %d",&n,&m);
        if(n>0 && m>0)
        {
            sum=n+m;
            score=sum/2;
            s1=n/2;
            s2=m/2;
            result=s1-s2;
            if(s1>0 && s1>s2)
            {
                printf("%d %d\n",score,result);
            }
            else
                printf("impossible\n");
        }
    }
    return 0;
}
