/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="i";
    m[2]="ii";
    m[3]="iii";
    m[4]="iv";
    m[5]="v";
    m[6]="vi";
    m[7]="vii";
    m[8]="viii";
    m[9]="ix";
    m[10]="x";
    m[20]="xx";
    m[30]="xxx";
    m[40]="xl";
    m[50]="l";
    m[60]="lx";
    m[70]="lxx";
    m[80]="lxxx";
    m[90]="xc";
    m[100]="c";
    int n;
    while(scanf("%d",&n) && n!=0)
    {
        string s;
        for(int i=1; i<=n; i++)
        {
            int a,b;
            a=i;
            if(a<=10)s+=m[a];
            if(a>10)
            {
                int b=a%10;
                a-=b;
                s+=m[a];
                s+=m[b];
            }
        }
        int j=0,v=0,x=0,l=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='i')j++;
            if(s[i]=='v')v++;
            if(s[i]=='x')x++;
            if(s[i]=='l')l++;
            if(s[i]=='c')c++;
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,j,v,x,l,c);
    }
    return 0;
}