/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 1583 DIGIT GENERATOR
*/
#include<bits/stdc++.h>
using namespace std;
int digit(int n)
{
    int result=n;
    while(n)
    {
        result+=n%10;
        n/=10;
    }
    return result;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i=0,result=0;
        scanf("%d",&n);
        if(n>100)i=n-100;
        for(i;i<n;i++)
        {
            if(digit(i)==n)
            {
                result=i;
                break;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}
