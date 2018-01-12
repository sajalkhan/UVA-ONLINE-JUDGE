/*------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12342 TAX CALCULATOR
-------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        double result=0,n;
        scanf("%lf",&n);
        printf("Case %d: ",i);
        if(n<=180000)printf("0\n");
        else
        {
            n-=180000;
            for(int j=1; n>0; j++)
            {
                if(j==1)
                {
                    if(n>=300000)result+=30000;
                    else result+=(n*0.1);
                    n-=300000;
                }
                if(j==2)
                {
                    if(n>=400000)result+=60000;
                    else result+=(n*0.15);
                    n-=400000;
                }
                if(j==3)
                {
                    if(n>=300000)result+=60000;
                    else result+=(n*0.2);
                    n-=300000;
                }
                if(j>3)
                {
                    result+=n*.25;
                    n=0;
                }
            }
            result=ceil(result);
            if(result<=2000)printf("2000\n");
            else printf("%.lf\n",result);
        }
    }
    return 0;
}
