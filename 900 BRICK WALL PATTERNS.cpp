/**-----------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 900 BRICK WALL PATTERNS
--------------------------------------------**/
#include<bits/stdc++.h>
using namespace std;

#define max 10000
#define pb push_back
#define ll unsigned long long
vector< ll >F;
void fibo()
{
    F.pb(1);
    F.pb(1);
    for(long long i=2; i<=max; i++)F.pb(F[i-1]+F[i-2]);
}
int main()
{
    fibo();
    unsigned long long n;
    while(cin>>n && n!=0)
    {
        cout<<F[n]<<endl;
    }
    return 0;
}
