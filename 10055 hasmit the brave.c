/// 10055 hasmit the brave
#include<stdio.h>
int main()
{
    long long n,m;
    long long result;
    while(scanf("%lld %lld",&n,&m)!=EOF)
    {
        if(m>n)
        {
            result=m-n;
        }
        else if(n>m)
        {
            result=n-m;
        }
        else if(n==m)
        {
            result=n-m;
        }
        printf("%lld\n",result);
    }
    return 0;
}
