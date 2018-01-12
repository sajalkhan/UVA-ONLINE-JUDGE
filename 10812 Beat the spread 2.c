#include<stdio.h>
int main()
{
    int a,b,c,s,d,n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&s,&d);
        if(s<d)
            printf("impossible\n");
        else
        {
            a=(s+d)/2;
            b=s-a;
            if(a-b!=d)
            {
                printf("impossible\n");
            }
            else
            {
                if(a<b)
                {
                    c=a;
                    a=b;
                    b=c;
                }
                printf("%d %d\n",a,b);
            }
        }
    }
    return 0;
}
