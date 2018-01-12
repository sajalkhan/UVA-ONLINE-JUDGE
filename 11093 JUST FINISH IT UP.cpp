/**---------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 11093 JUST FINISH IT UP
-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&n);
        int a[100050],b[100050],result1=0,result2=0;
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            result1+=a[j];
        }
        for(int j=0; j<n; j++)
        {
            scanf("%d",&b[j]);
            result2+=b[j];
        }
        int R=result1-result2;
        if(R>=0)
        {
            int x=0,sum=0,B=0;
            for(int k=0; k<n; k++)
            {
                if(sum>=0)a[k]+=sum;
                sum=a[k]-b[k];
                if(sum>=0 && !B)x=k,B=1;
                if(sum<0)x=0,B=0;
            }
            printf("Case %d: Possible from station %d\n",i,x+1);
        }
        if(R<0)printf("Case %d: Not possible\n",i);
    }
    return 0;
}
