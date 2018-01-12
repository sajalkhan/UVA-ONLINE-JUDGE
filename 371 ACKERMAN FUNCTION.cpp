/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 371 ACKERMAN FUNCTION
*/
#include<bits/stdc++.h>
using namespace std;
int AF(long long n)
{
    int count=0;
    if(n==1)return 3;
    while(n!=1)
    {
        count++;
        if(n&1)n=(3*n)+1;
        else n/=2;
    }
    return count;
}
int main()
{
    long long n,m;
    while(scanf("%lld %lld",&n,&m) && (n||m))
    {
        if(n>m)swap(n,m);
        long result1=0,result2=0;
        for(int i=n;i<=m;i++)
        {
            int v=AF(i);
            if(result1<v)result1=v,result2=i;
        }
        printf("Between %lld and %lld, %ld generates the longest sequence of %ld values.\n",n,m,result2,result1);
    }
    return 0;
}
