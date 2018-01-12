/**--------------------------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: 948 - Fibonaccimal Base
----------------------------------------------------------------**/
#include<bits/stdc++.h>
using namespace std;

#define max 10000
#define pb push_back
#define ll unsigned long long
vector< ll >F;
void fibo()
{
    F.pb(1);
    F.pb(2);
    for(long long i=2; i<=max; i++)F.pb(F[i-1]+F[i-2]);
}
int main()
{
    fibo();
    long long t;
    cin>>t;
    for(long i=0; i<t; i++)
    {
        string s;
        int I=0,b=0;
        ll n,a[max],sum=0;
        cin>>n;
        while(F[I]<=n)a[I]=F[I],I++;
        for(int j=I-1;j>=0;j--)
        {
            if(!b && F[j]<=n)
            {
                b=1;
                sum+=F[j];
                s+='1';
            }
            else if(b && sum+F[j]>n)s+='0';
            else if(b && sum+F[j]<=n)sum+=F[j],s+='1';
        }
        cout<<n<<" = "<<s<<" (fib)"<<endl;
    }
    return 0;
}