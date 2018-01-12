/**-------------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 10179 Irreducable Basic Fractions
---------------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int E_phi(int n)
{
    int result=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)result-=result/i;
        while(n%i==0)n/=i;
    }
    if(n>1)result-=result/n;
    return result;
}
int main()
{
    int n;
    while(cin>>n && n)
    {
        printf("%d\n",E_phi(n));
    }
    return 0;
}
