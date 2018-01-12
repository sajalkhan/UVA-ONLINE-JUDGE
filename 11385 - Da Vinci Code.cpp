/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define max 100007
#define ull unsigned long long
ull f[max];
map<ull,ull>mp;
void fib()
{
    f[1] = 1;
    f[2] = 2;
    mp[1]=1;
    mp[2]=2;
    for (long long i = 3; i <=max; i++)
    {
        f[i] = f[i-1] + f[i-2];
        mp[f[i]]=i;
    }
}
int main ()
{
    fib();
    int t,n,m;
    string s2;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d",&n);
        int a[max],b[max];
        string s,s1,s2;
        int len=0;
        for(int k=0;k<n;k++)
        {
            cin>>a[k];
            int L=mp[a[k]];
            if(len<L)len=L;
        }
        for(int i=0;i<len;i++)s2+=" ";
        getchar();
        getline(cin,s);
        int ln=s.size();
        for(int j=0;j<ln;j++)
        {
            if(s[j]>='A' && s[j]<='Z')s1+=s[j];
        }
        for(int j=0;j<n;j++)
        {
            s2[mp[a[j]]-1]=s1[j];
        }
        cout<<s2<<endl;
    }
    return 0;
}