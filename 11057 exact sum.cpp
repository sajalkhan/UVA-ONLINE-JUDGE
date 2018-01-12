/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define max 100020
int main()
{
    int a[max];
    int n,m;
    while(~scanf("%d",&n))
    {
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        scanf("%d",&m);
        int total=0;
        int b[max];
        int k=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==m)
                {
                    total++;
                    b[k++]=a[i];
                    b[k++]=a[j];
                }
            }
        }
        if(total<2)printf("Peter should buy books whose prices are %d and %d.\n\n",b[0],b[1]);
        else
        {
            int result=1000002;
            int T=0;
            for(int i=k-1;i>=0;i-=2)
            {
                int R=b[i]-b[i-1];
                if(result>R)
                {
                    result=R;
                    T=i;
                }
            }
            printf("Peter should buy books whose prices are %d and %d.\n\n",b[T-1],b[T]);
        }
    }
    return 0;
}