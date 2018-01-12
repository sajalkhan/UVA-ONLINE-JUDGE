/**------------------------------------------

    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 10699 COUNT THE FACTORS

---------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define max 1000000
bool isprime[max];
vector<int>prime;
void sieve()
{
    for(int i=3;i*i<=max;i+=2)
    {
        if(!isprime[i])for(int j=i*i;j<=max;j+=2*i)isprime[j]=true;
    }
    prime.pb(2);
    for(int i=3;i<=max;i+=2)if(!isprime[i])prime.pb(i);
}
int main()
{
    int n;
    sieve();
    while(cin>>n && n)
    {
        int m=n;
        set<int>st;
        for(int i=0;prime[i]*prime[i]<=n;i++)
        {
            while(n%prime[i]==0)
            {
                st.insert(prime[i]);
                n/=prime[i];
            }
        }
        if(n>1)st.insert(n);
        cout<<m<<" : "<<st.size()<<endl;
    }
    return 0;
}
