/**--------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10013 SUPER LONG SUMS
---------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define mx 1000001
int a[mx];
int b[mx];
int c[mx];
int main()
{
    int t,n,x,y;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)scanf("%d %d",&a[i],&b[i]);
        int carry=0,j=n;
        for(int i=n-1; i>=0; i--,j--)
        {
            int sum=a[i]+b[i];
            if(carry)sum+=1;
            if(sum>9)
            {
                carry=1;
                c[j]=sum%10;
            }
            else
            {
                carry=0;
                c[j]=sum;
            }
        }
        if(carry)c[j]=1;
        if(!carry)j++;
        for(int i=j; i<n; i++)printf("%d",c[i]);
        printf("%d\n",c[n]);
        if(t)printf("\n");
    }
    return 0;
}
