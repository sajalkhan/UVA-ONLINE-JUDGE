#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d",&n)!=EOF)
    {
        m=n/2;
        int sum=0;
        sum=n+m;
        printf("%d\n",sum);
    }
    return 0;
}
