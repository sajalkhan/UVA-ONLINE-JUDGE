/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
long long count_function(long long n)
{
    int count=1;
    while(n!=1)
    {
        if(n&1)n=3*n+1;
        else n/=2;
        count++;
    }
    return count;
}
long long result(long long a,long long b)
{
    if(a>b)swap(a,b);
    int min=0,max=0;
    for(int i=a;i<=b;i++)
    {
        min=count_function(i);
        if(max<min)max=min;
    }
    return max;
}
int main()
{
    long long n,m;
    while(cin>>n>>m)
    {
        printf("%lld %lld %lld\n",n,m,result(n,m));
    }
    return 0;
}