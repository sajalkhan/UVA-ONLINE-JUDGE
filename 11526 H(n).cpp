/// uva H(n) 11526

#include<bits/stdc++.h>
using namespace std;
long long H(long long n)
{
    long long result=0,a=1,x,y;
    while(a<=n)
    {
        x=n/a;
        y=n/x;
        result+=((y-a)+1)*x;
        a=y+1;
    }
    return result;
}
int main()
{
    long long n,t;
    scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",H(n));
    }
    return 0;
}
