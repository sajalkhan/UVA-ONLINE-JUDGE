#include<bits/stdc++.h>
using namespace std;
int one(int n)
{
    int o=1,count=1;
    while(o%n!=0)
    {
        o%=n;
        o=(o*10)+1;
        count++;
    }
    return count;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        printf("%d\n",one(n));
    }
    return 0;
}
