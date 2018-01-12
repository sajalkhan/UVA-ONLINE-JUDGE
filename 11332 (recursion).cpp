#include<bits/stdc++.h>
using namespace std;
int functionf(long n)
{
    if(n<10) return n;
    long sum=0,result=n;
    while(result!=0)
    {
        sum+=result%10;
        result=result/10;
    }
    return functionf(sum);
}
int main()
{
    long n,result;
    while(scanf("%ld",&n) && n!=0)
    {
        result=functionf(n);
        printf("%ld\n",result);
    }
    return 0;
}
