/*-------------------------------------------------

    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: 10473 - Simple Base Conversion
---------------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
string decimal_to_hexa(long long n)
{
    if(!n)return "0x0";
    string s1,s2="0x";
    while(n)
    {
        int x=n%16;
        if(x<10)s1+=x+'0';
        else s1+=x+55;
        n/=16;
    }
    reverse(s1.begin(),s1.end());
    return s2+s1;
}
long long hexa_to_decimal(string s)
{
    int ln=s.size();
    int power=ln-1;
    long long result=0;
    for(int i=0; i<ln; i++)
    {
        if(isdigit(s[i]))result+=(s[i]-'0')*pow(16,power--);
        if(isalpha(s[i]))result+=(toupper(s[i])-55)*pow(16,power--);
    }
    return result;
}
int main()
{
    string n,s;
    long long m;
    while(cin>>n)
    {
        int ln=n.size(),b=0;
        if(ln>=2)
        {
            if(n[1]=='x')
            {
                b=1;
                s=n.substr(2,ln);
                cout<<hexa_to_decimal(s)<<endl;
            }
        }
        if(!b)
        {
            stringstream ss(n);
            ss>>m;
            if(m<0)break;
            cout<<decimal_to_hexa(m)<<endl;
        }
    }
    return 0;
}
