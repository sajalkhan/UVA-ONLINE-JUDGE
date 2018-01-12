/// Problem no. 11777
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,m1,m2,m3,m4,c1,c2,c3,sum=0,total=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&c1,&c2,&c3);
        if(c1<=c2 && c1<=c3)
        {
            sum=(c2+c3)/2;
        }
        else if(c2<=c1 && c2<=c3)
        {
            sum=(c1+c3)/2;
        }
        else if(c3<=c1 && c3<=c2)
        {
            sum=(c1+c2)/2;
        }
        total=m1+m2+m3+m4+sum;
        if(total>=90)
        {
            printf("Case %d: A\n",i+1);
        }
        else if(total>=80 && total<90)
        {
            printf("Case %d: B\n",i+1);
        }
        else if(total>=70 && total<80)
        {
            printf("Case %d: C\n",i+1);
        }
        else if(total>=60 && total<70)
        {
            printf("Case %d: D\n",i+1);
        }
        else if(total<60)
        {
            printf("Case %d: F\n",i+1);
        }
    }
    return 0;
}
