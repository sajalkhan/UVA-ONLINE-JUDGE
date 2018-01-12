/*---------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11349 SYMMETRIC MATRIX
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
long matrix[111][111];
int symmetric(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]!=matrix[n-i-1][n-j-1])return 0;
        }
    }
    return 1;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string x,y;
    int t,n,test=1;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int b=0;
        cin>>x>>y>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%ld",&matrix[i][j]);
                if(matrix[i][j]<0)b=1;
            }
        }
        printf("Test #%d: ",test++);
        if(b)printf("Non-symmetric.\n");
        else
        {
            int N=symmetric(n);
            if(N)printf("Symmetric.\n");
            else printf("Non-symmetric.\n");
        }
    }
    return 0;
}
