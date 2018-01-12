/**-----------------------------------------*/
///    Author : sajal Khan
///    Daffodil International University
/**-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll factorial(int n)
{
    ll result=1;
    for(int i=1;i<=n;i++)result*=i;
    return result;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        if(n<0)
        {
            if(n&1)printf("Overflow!\n");
            else printf("Underflow!\n");
            continue;
        }
        if(n>13)printf("Overflow!\n");
        if(n<8)printf("Underflow!\n");
        if(n>=8 && n<=13)printf("%llu\n",factorial(n));
    }
    return 0;
}
