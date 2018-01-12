/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
string mul(string a,int n)
{
    string b;
    long long carry=0,num;
    reverse(a.begin(),a.end());
    int size=a.size();
    for(int i=0;i<size;i++)
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
int main()
{
    string s[1007];
    s[0]='1';
    s[1]='1';
    for(int i=2;i<=1000;i++)s[i]=mul(s[i-1],i);
    int a;
    while(cin>>a)
    {
        printf("%d!\n",a);
        cout<<s[a]<<endl;
    }
    return 0;
}