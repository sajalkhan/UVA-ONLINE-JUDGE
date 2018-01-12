/// 11854
#include<stdio.h>
int main()
{
    int a,b,c,right=0,left=0;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(c>a && c>b)
        {
            right=a*a+b*b;
            left=c*c;
            if(right==left)
            {
                printf("right\n");
            }
            else
                printf("wrong\n");
        }
        else if(b>a && b>c)
        {
            right=a*a+c*c;
            left=b*b;
            if(right==left)
            {
                printf("right\n");
            }
            else
                printf("wrong\n");
        }
        else if(a>b && a>c)
        {
            right=b*b+c*c;
            left=a*a;
            if(right==left)
            {
                printf("right\n");
            }
            else
                printf("wrong\n");
        }
        else if(a==b==c==0)
        {
            break;
        }
    }
    return 0;
}
