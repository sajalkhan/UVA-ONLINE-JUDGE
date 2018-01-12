/**
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10474 WHERE IS THE MARBLE?
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,q,k,T=1;
    while(scanf("%d %d",&n,&q) && (n||q))
    {
        int a[11111];
        for(int i=0; i<n; i++)scanf("%d",&a[i]);
        sort(a,a+n);
        printf("CASE# %d:\n",T++);
        for(int i=0; i<q; i++)
        {
            int b=0;
            scanf("%d",&k);
            int start=0;
            int end=n-1;
            while(start<=end)
            {
                int mid=start+(end-start)/2;
                if(k==a[mid])
                {
                    b=1;
                    for(int i=mid;i>=0;i--)
                    {
                        if(k!=a[i])
                        {
                            printf("%d found at %d\n",k,i+2);
                            break;
                        }
                        if(k==a[0] && !i)
                        {
                            printf("%d found at %d\n",k,i+1);
                            break;
                        }
                    }
                    break;
                }
                if(k>a[mid])start=mid+1;
                else if(k<a[mid])end=mid-1;
            }
            if(!b)printf("%d not found\n",k);
        }
    }
    return 0;
}
