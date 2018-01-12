/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        double total_hour=a+b;
        double taka=c/total_hour;
        if(a>b)a=(a*taka)+(a-b)*taka;
        else if(a<b)
        {
            a=(a*taka)-(b-a)*taka;
            if(a<=0)a=0;
        }
        else a=a*taka;
        printf("%0.lf\n",a);
    }
    return 0;
}