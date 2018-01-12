/**-----------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 160 FACTORS AND FACTORIAL
-------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define mx 1000000
bool isprime[mx];
int prime[mx];
void sieve()
{
    for(int i=3; i*i<=mx; i+=2)
    {
        if(!isprime[i])for(int j=i*i; j<=mx; j+=2*i)isprime[j]=true;
    }
    int k=0;
    prime[k++]=2;
    for(int i=3; i<=mx; i+=2)if(!isprime[i])prime[k++]=i;
}
string mul(string a,int n)
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
string div(string s,long long m)
{
    long long int rem=0;
    string result;
    int f=1;
    for(int i=0; i<s.size(); i++)
    {
        rem=s[i]-'0'+rem*10;
        if(rem/m!=0)f=0;
        if(!f)result+=(rem/m)+'0';
        rem=rem%m;
    }
    if(f)return "0";
    return result;
}
int mod(string s,int m)
{
    int result=0;
    int ln=s.size();
    for(int i=0; i<ln; i++)
    {
        result=(result*10+s[i]-'0')%m;
    }
    return result;
}
int main()
{
    sieve();
    string s[1000];
    s[0]='1';
    s[1]='1';
    for(int i=2; i<=111; i++)s[i]=mul(s[i-1],i);
    int a;
    while(scanf("%d",&a) && a)
    {
        string s1=s[a];
        printf("%3d! =",a);
        if(s1=="1")
        {
            printf("\n");
            continue;
        }
        for(int i=0;; i++)
        {
            int count=0,b=0;
            while(mod(s1,prime[i])==0)
            {
                count++;
                s1=div(s1,prime[i]);
                if(s1=="0" || s1=="1")
                {
                    b=1;
                    break;
                }
            }
            if(i==15)printf("\n      ");
            printf("%3d",count);
            if(b)break;
        }
        printf("\n");
    }
    return 0;
}
