/**
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 568 JUST THE FACTS
*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<char>nonzero;
string mul(string a,int n)
{
    string b;
    long long carry=0,num;
    reverse(a.begin(),a.end());
    int size=a.size();
    int B=0;
    for(int i=0;i<size;i++)
    {
        num=(a[i]-'0')*n+carry;
        char c=(num%10)+'0';
        if(c!='0' && !B)B=1,nonzero.pb(c);
        b+=c;
        carry=num/10;
    }
    while(carry)
    {
        b+=(carry%10)+'0';
        carry/=10;
    }
    reverse(b.begin(),b.end());
    return b;
}
int main()
{
    string s[10007];
    s[0]='1';
    s[1]='1';
    nonzero.pb('1');
    nonzero.pb('1');
    for(int i=2;i<=10000;i++)s[i]=mul(s[i-1],i);
    int a;
    while(cin>>a)
    {
        stringstream ss;
        string s,s1=" ";
        ss<<a;
        ss>>s;
        int ln=s.size();
        for(int i=0;i<5-ln;i++)printf(" ");
        cout<<a<<" -> "<<nonzero[a]<<endl;
    }
    return 0;
}
