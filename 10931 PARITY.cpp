/**-------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 10931 PARITY
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
void decimal_to_binary(int n)
{
    int one=0;
    string binary;
    while(n)
    {
        int x=n%2;
        binary+=x+'0';
        if(x)one++;
        n/=2;
    }
    reverse(binary.begin(),binary.end());
    cout<<"The parity of "<<binary<<" is "<<one<<" (mod 2)."<<endl;
}
int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        decimal_to_binary(n);
    }
    return 0;
}
