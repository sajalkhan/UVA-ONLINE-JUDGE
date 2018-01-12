///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        double s=(a+b+c)/2.0;
        double ans=(4/3.0)*sqrt(s*(s-a)*(s-b)*(s-c));
        if(!(ans>0))
        {
            ans=-1.0;
        }
        printf("%.3lf\n",ans);
    }
    return 0;
}
