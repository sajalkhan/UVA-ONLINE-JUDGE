/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define max 101
int main()
{
    int n,t=1;
    int a[max],b[max];
    while(scanf("%d",&n) && !(n<0))
    {
        int result=n;
        for(int i=0; i<12; i++)scanf("%d",&a[i]);
        for(int i=0; i<12; i++)scanf("%d",&b[i]);
        printf("Case %d:\n",t);
        for(int i=0; i<12; i++)
        {
            if(!i)
            {
                if(b[i]<=result)
                {
                    result-=b[i];
                    printf("No problem! :D\n");
                }
                else printf("No problem. :(\n");
            }
            else
            {
                result+=a[i-1];
                if(b[i]<=result)
                {
                    result-=b[i];
                    printf("No problem! :D\n");
                }
                else printf("No problem. :(\n");
            }
        }
        t++;
    }
    return 0;
}