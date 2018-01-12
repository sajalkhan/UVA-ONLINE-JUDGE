/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int range=2147483647;
    char a[10000],b[10000],c;
    while(scanf("%s %c %s",a,&c,b)!=EOF)
    {
        long double A,B;
        A=atof(a);
        B=atof(b);
        printf("%s %c %s\n",a,c,b);
        if(A>range)printf("first number too big\n");
        if(B>range)printf("second number too big\n");
        if(c=='+' && (A+B)>range)printf("result too big\n");
        if(c=='*' && (A*B)>range)printf("result too big\n");
    }
    return 0;
}