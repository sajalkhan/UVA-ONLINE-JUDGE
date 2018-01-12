/// 10812
#include<stdio.h>
int main()
{
    long n,m,score=0,result=0,sum=0,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&n,&m);
        sum=(n+m);
        if(n<m || (sum)%2==1)
        {
            printf("impossible\n");
        }
        else
        {
            score=(sum)/2;
            result=score-m;
            printf("%ld %ld\n",score,result);
        }
    }
    return 0;
}
