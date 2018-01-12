/**----------------------------------
   AUTHOR : SAJAL KHAN
   PROBLEM: UVA 10101 BANGLA NUMBER
------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
unsigned long long print(int x,unsigned long long n)
{
    if(x>=8)
    {
        unsigned long long m=n/10000000;
        printf("%llu kuti",m);
        return n-=m*10000000;
    }
    if(x<8 && x>=6)
    {
        unsigned long long m=n/100000;
        printf("%llu lakh",m);
        return n-=m*100000;
    }
    if(x<6 && x>=4)
    {
        unsigned long long m=n/1000;
        printf("%llu hajar",m);
        return n-=m*1000;
    }
    if(x<4 && x>=3)
    {
        unsigned long long m=n/100;
        printf("%llu shata",m);
        return n-=m*100;
    }
}
int main()
{
    int test=1;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    unsigned long long n,m,x;
    while(~scanf("%llu",&n))
    {
        printf("%4d. ",test++);
        if(n<100)
        {
            printf("%llu\n",n);
            continue;
        }
        int k=0,l=0,h=0,s=0;
        string num,num1,num2;
        stringstream ss;
        ss<<n;
        ss>>num;
        int ln=num.size();
        if(ln>=8)m=n/10000000,k=1;
        if(ln<8 && ln>=6)m=n/100000,l=1;
        if(ln<6 && ln>=4)m=n/1000,h=1;
        if(ln<4 && ln>=3)m=n/100,s=1;
        stringstream st;
        st<<m;
        st>>num1;
        num2=num.substr(num1.size(),num.size());
        stringstream sx;
        sx<<num2;
        sx>>x;
        while(m>=100)
        {
            stringstream st;
            st<<m;
            st>>num1;
            m=print(num1.size(),m);
            printf(" ");
        }
        if(k)
        {
            if(m)printf("%llu kuti",m);
            else printf("kuti");
        }
        if(l)
        {
            if(m)printf("%llu lakh",m);
            else printf("lakh");
        }
        if(h)
        {
            if(m)printf("%llu hajar",m);
            else printf("hajar");
        }
        if(s)
        {
            if(m)printf("%llu shata",m);
            else printf("shata");
        }
        if(x>0)
        {
            printf(" ");
            ln=num2.size();
            m=x;
            while(m>=100)
            {
                stringstream st;
                st<<m;
                st>>num1;
                m=print(num1.size(),m);
                if(m)printf(" ");
            }
            if(m)printf("%llu\n",m);
            else printf("\n");
        }
        else printf("\n");

    }
    return 0;
}

