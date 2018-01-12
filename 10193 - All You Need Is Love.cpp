/*------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: 10193 - All You Need Is Love
---------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int Binary_to_decimal(string s)
{
    int b=0;
    long long result=0;
    for(int i=0; i<s.size(); i++)
    {
        if(!b && s[i]=='1')b=1,result+=1;
        else if(b && s[i]=='1')result<<=1,result+=1;
        if(b && s[i]=='0')result<<=1;
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    getchar();
    string s1,s2;
    for(int i=1; i<=n; i++)
    {
        cin>>s1>>s2;
        int a=Binary_to_decimal(s1);
        int b=Binary_to_decimal(s2);
        int Gcd=gcd(a,b);
        if(Gcd==1)printf("Pair #%d: Love is not all you need!\n",i);
        else printf("Pair #%d: All you need is love!\n",i);
    }
    return 0;
}
