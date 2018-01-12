/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int bigmod(string s,int n)
{
    int mod=0;
    int ln=s.size();
    for(int i=0;i<ln;i++)
    {
        mod=(10*mod+s[i]-'0')%n;
    }
    if(!mod)return 0;
    else return 1;
}
int main()
{
    int t=0;
    string n;
    while(cin>>n)
    {
        if(t)printf("\n");
        int b=0,l=0;
        if((bigmod(n,4)==0) && (bigmod(n,100)!=0)||(bigmod(n,400)==0))b=1,l=1,printf("This is leap year.\n");
        if(bigmod(n,15)==0)b=1,printf("This is huluculu festival year.\n");
        if(l && bigmod(n,55)==0)b=1,printf("This is bulukulu festival year.\n");
        if(!b)printf("This is an ordinary year.\n");
        t++;
    }
    return 0;
}