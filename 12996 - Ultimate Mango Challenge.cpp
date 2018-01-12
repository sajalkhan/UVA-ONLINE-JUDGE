///md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[30],b[30];
    int t,n,m,test=1;
    scanf("%d",&t);
    while(t--)
    {
        int x=0,sum=0;
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        for(int j=0;j<n;j++)scanf("%d",&b[j]);
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                x=1;
                break;
            }
            sum+=a[i];
        }
        if(!x && sum<=m)printf("Case %d: Yes\n",test++);
        else printf("Case %d: No\n",test++);
    }
    return 0;
}
