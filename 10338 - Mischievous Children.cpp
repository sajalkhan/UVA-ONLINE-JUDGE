/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<iostream>
#include<algorithm>
#include<sstream>
#include<cstring>
#include<cstdio>
#include<string>
#include<vector>
#include<map>
#define pb push_back
using namespace std;
map<long long,long long>fact;
long long factorial(long long n)
{
    return n==1?1:n*factorial(n-1);
}
void factorial1()
{
    fact[0]=1;
    for(long long i=1; i<=20; i++)fact[i]=factorial(i);
}
int main()
{
    int n;
    factorial1();
    scanf("%d",&n);
    getchar();
    for(int i=0; i<n; i++)
    {
        string s;
        int count=0;
        vector<char>v;
        map<char,bool>m;
        map<char,int>mp;
        cin>>s;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            count++;
            mp[s[i]]++;
            if(!m[s[i]])
            {
                m[s[i]]=true;
                v.pb(s[i]);
            }
        }
        long long finalresult=1;
        for(int i=0; i<v.size(); i++)
        {
            finalresult*=fact[mp[v[i]]];
        }
        printf("Data set %d: ",i+1);
        cout<<fact[count]/finalresult<<endl;
    }
    return 0;
}