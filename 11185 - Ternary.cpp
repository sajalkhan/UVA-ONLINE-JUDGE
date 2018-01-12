/*-------------------------------------------------

    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 11185 - Ternary
---------------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n && !(n<0))
    {
        if(n==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        string s;
        while(n)
        {
            s+=(n%3)+'0';
            n/=3;
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}
