/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100];
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        printf("Case %d: %d\n",i,a[n/2]);
    }
    return 0;
}