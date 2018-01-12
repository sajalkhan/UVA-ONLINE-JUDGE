/**-----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12397 ROMAN NUMERALS
-------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>r;
    r[1]="i";
    r[2]="ii";
    r[3]="iii";
    r[4]="iv";
    r[5]="v";
    r[6]="vi";
    r[7]="vii";
    r[8]="viii";
    r[9]="ix";
    r[10]="x";
    r[40]="xl";
    r[50]="l";
    r[90]="xc";
    r[100]="c";
    r[400]="cd";
    r[500]="d";
    r[900]="cm";
    r[1000]="m";
    map<char,int>match;
    match['i']=1;
    match['v']=2;
    match['x']=2;
    match['l']=2;
    match['c']=2;
    match['d']=3;
    match['m']=4;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        string s;
        int i=0,sum=0;
        int a[]= {1000,900,500,400,100,90,50,40,10};
        while(n)
        {
            int m=n/a[i];
            if(m)
            {
                n-=(m*a[i]);
                for(int j=0; j<m; j++)s+=r[a[i]];
            }
            if(n<10)s+=r[n],n=0;
            i++;
        }
        int ln=s.size();
        for(int j=0;j<ln;j++)sum+=match[s[j]];
        printf("%d\n",sum);
    }
    return 0;
}
