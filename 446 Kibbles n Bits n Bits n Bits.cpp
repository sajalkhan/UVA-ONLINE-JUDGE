/**--------------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: 446 Kibbles "n" Bits "n" Bits "n" Bits
----------------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
long long hexa_to_decimal(string s)
{
    int ln=s.size();
    int power=ln-1;
    long long result=0;
    for(int i=0; i<ln; i++)
    {
        if(s[i]-'0'<10)result+=(s[i]-'0')*pow(16,power--);
        else result+=(s[i]-55)*pow(16,power--);
    }
    return result;
}
string decimal_to_binary(long long n)
{
    string result,final_result;
    while(n)
    {
        result+=n%2+'0';
        n/=2;
    }
    int ln=result.size();
    for(int i=0;i<13-ln;i++)final_result+='0';
    reverse(result.begin(),result.end());
    return final_result+result;
}
int main()
{
    int n;
    cin>>n;
    char c;
    string s1,s2;
    for(int i=0; i<n; i++)
    {
        cin>>s1>>c>>s2;
        string binary1,binary2;
        long long result1=0,result2=0;
        result1=hexa_to_decimal(s1);
        result2=hexa_to_decimal(s2);
        binary1=decimal_to_binary(result1);
        binary2=decimal_to_binary(result2);
        if(c=='+')result1+=result2,cout<<binary1<<" + "<<binary2<<" = "<<result1<<endl;
        if(c=='-')result1-=result2,cout<<binary1<<" - "<<binary2<<" = "<<result1<<endl;
    }
    return 0;
}
