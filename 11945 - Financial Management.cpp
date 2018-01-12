#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double n;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        double total=0;
        for(int j=0; j<12; j++)
        {
            scanf("%lf",&n);
            total+=n;
        }
        total/=12.0;
        if(total>999.99)printf("%d $%ld,%.2lf\n",i,(long)(total/1000.0),fmod(total,1000.0));
        else printf("%d $%.2lf\n",i,total);
    }
    return 0;
}
