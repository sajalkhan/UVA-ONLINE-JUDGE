#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b))
    {
        int sum1=0,sum2=0;
        if(a==-1 && b==-1)break;
        if(a<b)
        {
            sum1=b-a;
            sum2=(99+(99-b))-(98-a);
            printf("%d\n",min(sum1,sum2));
        }
        else if(a>b)
        {
            sum1=a-b;
            sum2=(99+(99-a))-(98-b);
            printf("%d\n",min(sum1,sum2));
        }
        else if(a==b)printf("0\n");
    }
    return 0;
}
