/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long n;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        long m=n;
        int a[1000],j=0;
        for(int k=2; k*k<=n; k++)
        {
            while(n%k==0)
            {
                a[j++]=k;
                n/=k;
            }
        }
        if(n>1)a[j++]=n;
        int A=1,B=1,C=1,D=1;
        for(int i=0; i<j; i++)
        {
            A=a[0];
            if(i>0)B*=a[i];
            if(j<2)
            {
                D=a[0];
                C=1;
            }
            else
            {
                if(i<2)C*=a[i];
                if(i>=2)D*=a[i];
            }
        }
        printf("Case #%d: %d = %d * %d = %d * %d\n",i,m,A,B,C,D);
    }
    return 0;
}