/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11689 - Soda Surpler
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,e,f,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&e,&f,&c);
        int n=e+f,result=0;
        while(n>=c)
        {
            result+=n/c;
            int r=n-((n/c)*c);
            n=n/c+r;
        }
        printf("%d\n",result);
    }
    return 0;
}
