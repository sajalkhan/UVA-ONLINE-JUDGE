/*----------------------------------
    AUTHOR: SAJAL KHAN
    PROBLEM:UVA 11470 SQUARE SUM
----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,test=1;
    int a[11][11];
    while(scanf("%d",&n) && n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Case %d:",test++);
        for(int i=0;i<=(n-1)/2;i++)
        {
            int sum=0;
            printf(" ");
            for(int j=i;j<n-i;j++)
            {
                if(i==j || j==n-(i+1))
                {
                    for(int k=i;k<n-i;k++)sum+=a[j][k];
                }
                else sum+=(a[j][i]+a[j][n-(i+1)]);
            }
            printf("%d",sum);
        }
        printf("\n");
    }
    return 0;
}
