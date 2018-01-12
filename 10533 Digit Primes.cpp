/**-----------------------------------------
    Md.soharub hossen
    Daffodil International University(Dhaka)
    Problem: Uva 10533 Digit Primes
--------------------------------------------**/
#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long int
#define mx 10000000
#define pb push_back
bool mark[mx];
bool seg[mx];
ll Digit[mx];
vector< ll >prime;
void sieve()
{
    mark[0]=true;
    mark[1]=true;
    for(int i=4; i<=mx; i+=2)mark[i]=true;
    for(int i=3; i*i<mx; i+=2)
    {
        if(!mark[i])
        {
            for(int j=i*i; j<=mx; j+=2*i)mark[j]=true;
        }
    }
    prime.pb(2);
    for(int i=3; i<=mx; i+=2)
    {
        if(!mark[i])prime.pb(i);
    }
}
void digit_prime()
{
    sieve();
    int count=0;
    for(long i=2;i<mx;i++)
    {
        long long num=0,digit=i;
        if(!mark[i])
        {
            while(digit)
            {
                num+=digit%10;
                digit/=10;
            }
            if(!mark[num])count++;
        }
        Digit[i]=count;
    }
}
int main()
{
    digit_prime();
    ll start,L,a,b,t;
    cin>>t;
    for(long i=0;i<t;i++)
    {
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",Digit[b]-Digit[a-1]);
    }
    return 0;
}
