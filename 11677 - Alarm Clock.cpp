/**-------------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: 11677 - Alarm Clock
---------------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(scanf("%d %d %d %d",&a,&b,&c,&d) && (a||b||c||d))
    {
        if(a<c && b<=d)printf("%d\n",(c-a)*60+(d-b));
        if(a<c && b>d)printf("%d\n",(c-a)*60-(b-d));
        if(a>c && b<=d)printf("%d\n",(24-(a-c))*60+(d-b));
        if(a>c && b>d)printf("%d\n",(24-(a-c))*60-(b-d));
        if(a==c && b<=d)printf("%d\n",d-b);
        if(a==c && b>d)printf("%d\n",1440-(b-d));
    }
    return 0;
}
