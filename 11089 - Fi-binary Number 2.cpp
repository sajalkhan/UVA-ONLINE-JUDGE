/*----------------------------------------
    Md.Soharub Hossen
    Daffodil International University
    Problem: 11089 - Fi-binary Number
    THIS IS NOT SOLUTION... JUST I DO IT FOR PRACTICE AND THIS PROGRAM WORK FIRST UP TO 10^4 VERY WELL
    SO I SAVE IT :)
  ----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mx 10000
vector<string>F;
map<long,int>mp;

string binary(long long n)
{
    string b;
    while(n)
    {
        long x=n%2;
        b+=x+'0';
        n/=2;
    }
    reverse(b.begin(),b.end());
    return b;
}
void fibo()
{
    F.pb("1");
    F.pb("10");
    mp[2]++;
    for(int i=4;F.size()<=mx; i++)
    {
        long n=i/2;
        if(!mp[n])continue;
        else if(mp[n]<=1)
        {
            if(n&1)
            {
                mp[i]++;
                mp[n]++;
                F.pb(binary(i));
            }
            else
            {
                mp[i]++;
                mp[n]++;
                F.pb(binary(i));
                mp[i+1]++;
                F.pb(binary(i+1));
            }
        }

    }
}
int main()
{
    fibo();
    long long n;
    while(cin>>n)
    {
        cout<<F[n-1]<<endl;
    }
    return 0;
}