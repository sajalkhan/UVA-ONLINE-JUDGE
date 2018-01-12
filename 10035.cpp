#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    while(scanf("%lld %lld",&n,&m)!=EOF)
    {
        int k=0,L=0;
        int a[100]= {0};
        int b[100]= {0};
        if(n==0 && m==0)
        {
                break;
        }
        while(n!=0)
        {
            a[k++]=n%10;
            n=n/10;
        }
        while(m!=0)
        {
            b[L++]=m%10;
            m=m/10;
        }
        int M=max(k,L);
        int count=0;
        for(int i=0; i<M; i++)
        {
            if(a[i]+b[i]>9)
            {
                count++;
                a[i+1]+=1;
            }
        }
        if(count==0)
        {
            printf("No carry operation.\n");
        }
        else if(count==1)
        {
            printf("1 carry operation.\n");
        }
        else if(count>1)
        {
            printf("%d carry operations.\n",count);
        }
    }
    return 0;
}
