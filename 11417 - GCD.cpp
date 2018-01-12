#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        int G=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                G+=gcd(i,j);
            }
        }
        printf("%d\n",G);
    }
    return 0;
}
