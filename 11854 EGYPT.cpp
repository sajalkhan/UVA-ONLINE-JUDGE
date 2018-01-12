/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11854 EGYPT
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,A[5];
    while(scanf("%d %d %d",&a,&b,&c) && (a||b||c))
    {
        A[0]=a;
        A[1]=b;
        A[2]=c;
        sort(A,A+3);
        if((A[0]*A[0])+(A[1]*A[1])==(A[2]*A[2]))printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
