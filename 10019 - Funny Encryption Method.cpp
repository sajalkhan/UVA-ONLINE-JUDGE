/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int binary(int n)
{
    int count=0;
    while(n)
    {
        if(n%2==1)count++;
        n/=2;
    }
    return count;
}
int hexa(int n)
{
    int m[10],count=0;
    memset(m,0,sizeof(m));
    m[0]=0;
    m[1]=1;
    m[2]=1;
    m[3]=2;
    m[4]=1;
    m[5]=2;
    m[6]=2;
    m[7]=3;
    m[8]=1;
    m[9]=2;
    m[10]=2;
    while(n)
    {
        int x=n%10;
        count+=m[x];
        n/=10;
    }
    return count;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        printf("%d %d\n",binary(m),hexa(m));
    }
    return 0;
}