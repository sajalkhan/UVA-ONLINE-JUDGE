/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define max 1000001
bool isprime[max];
map<long long,bool>mp;
void sieve()
{
    for(long long i=3;i*i<=max;i+=2)
    {
        for(long long j=i*i;j<=max;j+=i*2)if(!isprime[j])isprime[j]=true;
    }
    mp[1]=true;
    mp[2]=true;
    for(long long i=3;i<=max;i+=2)if(!isprime[i])mp[i]=true;
}
int main()
{
    sieve();
    string s;
    while(cin>>s)
    {
        int size=s.size();
        long long result=0;
        for(int i=0;i<size;i++)
        {
            if(s[i]>='a' && s[i]<='z')result+=s[i]-96;
            else if(s[i]>='A' && s[i]<='Z')result+=s[i]-38;
        }
        if(mp[result])printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
        s.clear();
    }
    return 0;
}