/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define max 9999999
int a[max];
void sieve()
{
    a[0]=1;
    a[1]=1;
    for(long long i=4; i<max; i+=2)a[i]=1;
    for(long long i=3; i*i<=max; i+=2)
    {
        if(!a[i])for(int j=i*i; j<=max; j+=2*i)a[j]=1;
    }
}
int main()
{
    sieve();
    int n;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        int ln=s.size();
        map<char,int>mp;
        map<char,int>::iterator it;
        for(int j=0;j<ln;j++)
        {
            if(isalpha(s[j])||isdigit(s[j]))mp[s[j]]++;
        }
        int b=0;
        printf("Case %d: ",i);
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(!a[it->second])b=1,cout<<it->first;
        }
        if(!b)printf("empty");
        printf("\n");
    }
    return 0;
}