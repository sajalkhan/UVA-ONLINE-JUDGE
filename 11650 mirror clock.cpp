/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int a,b;
        scanf("%d:%d",&a,&b);
        if(!b)
        {
            if(a!=12)a=12-a;
        }
        else
        {
            a+=1;
            if(a>12)a-=2;
            else if(a==12)a=12;
            else a=12-a;
            b=60-b;
        }
        if(a<10)printf("0%d",a);
        else printf("%d",a);
        if(b<10)printf(":0%d\n",b);
        else printf(":%d\n",b);
    }
    return 0;
}