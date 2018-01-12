#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double f,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lf %lf",&c,&f);
        double F=(c*9/5.0)+f+32;
        double C=(F-32)*5/9.0;
        printf("Case %d: %.2lf\n",i,C);
    }
    return 0;
}
