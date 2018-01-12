/**--------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 389 BASICALLY SPEAKING
----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int other_to_decimal(string s,int a)
{
    int ln=s.size();
    int p=ln-1;
    long long result=0;
    for(int i=0; i<ln; i++)
    {
        if(isdigit(s[i])) result+=(s[i]-'0')*pow(a,p--);
        if(isalpha(s[i])) result+=(s[i]-55)*pow(a,p--);
    }
    return result;
}
string decimal_to_other(long long num,int b)
{
    if(!num)return "0";
    string result;
    while(num)
    {
        int n=num%b;
        if(n<10)result+=n+'0';
        else result+=n+55;
        num/=b;
    }
    reverse(result.begin(),result.end());
    return result;
}
int main()
{
    string s;
    int a,b;
    while(cin>>s>>a>>b)
    {
        if(a==10)
        {
            stringstream ss(s);
            long long n;
            ss>>n;
            string s1=decimal_to_other(n,b);
            int ln=s1.size();
            if(ln<=7)
            {
                for(int i=0;i<7-ln;i++)printf(" ");
                cout<<s1<<endl;
            }
            else printf("  ERROR\n");

        }
        else
        {
            long long n=other_to_decimal(s,a);
            string s1=decimal_to_other(n,b);
            int ln=s1.size();
            if(ln<=7)
            {
                for(int i=0;i<7-ln;i++)printf(" ");
                cout<<s1<<endl;
            }
            else printf("  ERROR\n");
        }
    }
    return 0;
}
