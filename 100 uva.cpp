/**
22 = 22/2=11, 11*3+1=34, 34/2=17, 17*3+1=52, 52/2=26, 26/2=13, 13*3+1=40, 40/2=20, 20/2=10, 10/2=5, 5*3+1=16, 16/2=8

8/2=4, 4/2=2, 2/2=1 1...

so ===  22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 == count(16)
**/
// -----------------------------------------------------------------------------------------------------------------//
// -----------------------------------------------------------------------------------------------------------------//
 /**
    input :
           1 10
           100 200
    Output:
           1 10 20
           100 200 125
1 theke 10 er maje digit ache (1 2 3 4 5 6 7 8 9 10) ato gula... akhon sob gula k jodi uporer 22 er moto kore
count kori tahole oi digit gulor maje jar count er man sob chaite boro hobe setai hobe amader result...

suppose 1=1  so count=1;

        2=2/2=1; count =2;

        3=3*3+1 = 10, 10/2=5, 5*3+1=16, 16/2=8, 8/2=4, 4/2=2, 2/2=1, so count=8

        4= 4/2=2, 2/2=1; count=3;

        5=5*3+1=16, 16/2=8, 8/2=4, 4/2=2, 2/2=1, count=6;

        6=6/2=3, 3*3+1=10, 10/2=5, 5*3+1=16, 16/2=8, 8/2=4, 4/2=2, 2/2=1,count=9;

        7=7*3+1=22,22/2=11, 11*3+1=34, 34/2=17, 17*3+1=52, 52/2=26, 26/2=13, 13*3+1=40, 40/2=20, 20/2=10,
        10/2=5, 5*3+1=16, 16/2=8 8/2=4, 4/2=2, 2/2=1  count= 17

        ai vabe 10 porjonto korar por jar count er man sob chaite beshi hobe saita hobe result... aikhane 9 er jonno 20 hobe

 **/
#include<iostream>
#include<cstdio>
using namespace std;
long long count_function(long long n)
//int main()
{
    long long count=0;
//    scanf("%lld",&n);
    while(1)
    {
        count++;
        if(n==1)
        {
            break;
        }
        if(n&1)
        {
            n=3*n+1;
        }
        else
        {
            n=n/2;
        }
    }
//    printf("%lld\n",count);
    return count;
}
long long num(long long n,long long m)
{
    long long max=0,min;
    if(n>m)
        return num(m,n);
//    int i;
//    for(i=n;i<=m;i++)
    while(n<=m)
    {
        min=count_function(n);
        if(max<min)
        {
            max=min;
        }
        n++;
    }
    return max;
}
int main()
{
    long long n,m;
    while(scanf("%lld %lld",&n,&m)!=EOF)
    {
        printf("%lld %lld %lld\n",n,m,num(n,m));
    }
    return 0;
}
