
/**------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 406 PRIME CUTS
--------------------------------------------**/

#include<bits/stdc++.h>
using namespace std;

#define  ll unsigned long long
#define max 100000
#define pb push_back
bool isprime[max];
vector< ll >prime;
void sieve()
{
    for(long i=3;i*i<=max;i+=2)
    {
        if(!isprime[i])for(long j=i*i;j<=max;j+=2*i)isprime[j]=true;
    }
    prime.pb(1);
    prime.pb(2);
    for(long i=3;i<=max;i+=2)if(!isprime[i])prime.pb(i);
}
int main()
{
    sieve();
    long long n,c;
    while(cin>>n>>c)
    {
        long long a[100000],t=0;
        while(prime[t]<=n)a[t]=prime[t],t++;
        if(t&1)
        {
            long long mid=0,ln=0;
            if(c>t)mid=0,ln=t;
            else mid=t/2,ln=(c*2)-1;
            if(mid<c)mid=0,ln=t;
            else mid=(mid-c)+1;
            cout<<n<<" "<<c<<": ";
            for(int i=mid,count=0;count<ln;count++,i++)
            {
                if(count)printf(" ");
                cout<<a[i];
            }
        }
        else
        {
            long mid=0,ln=0;
            if(c>t)mid=0,ln=t;
            else mid=t/2,ln=c*2;
            if(mid<c)mid=0,ln=t;
            else mid-=c;
            cout<<n<<" "<<c<<": ";
            for(int i=mid,count=0;count<ln;count++,i++)
            {
                if(count)printf(" ");
                cout<<a[i];
            }
        }
        printf("\n\n");
    }
    return 0;
}
