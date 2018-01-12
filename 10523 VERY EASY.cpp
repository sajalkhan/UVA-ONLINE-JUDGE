/**------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10523 VERY EASY
--------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
string mul(string a,long long n)
{
    string b;
    long long carry=0,num;
    reverse(a.begin(),a.end());
    int size=a.size();
    for(int i=0; i<size; i++)
    {
        num=(a[i]-'0')*n+carry;
        b+=(num%10)+'0';
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
string add(string s1,string s2)
{
    string result;
    int a[10000]= {0},b[10000]= {0},c[10000]= {0};
    int I=0,J=0;
    for(int i=s1.size()-1; i>=0; i--)a[i]=s1[I++]-'0';
    for(int i=s2.size()-1; i>=0; i--)b[i]=s2[J++]-'0';
    int M=max(s1.size(),s2.size());
    for(int i=0; i<M; i++)
    {
        int sum=a[i]+b[i];
        if(sum>9)
        {
            c[i]=sum%10;
            a[i+1]+=1;
            if(i==M-1)M++;
        }
        else c[i]=sum;
    }
    for(int i=M-1; i>=0; i--)result+=c[i]+'0';
    return result;
}
string pow(ll n,ll m)
{
    string result="1";
    for(int i=1; i<=n; i++)result=mul(result,m);
    return result;
}
int main()
{
    ll n,m;
    while(~scanf("%llu %llu",&n,&m))
    {
        string s="0";
        for(ll i=1; i<=n; i++)
        {
            s=add(s,mul(pow(i,m),i));
        }
        cout<<s<<endl;
    }
    return 0;
}
