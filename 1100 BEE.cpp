/**-----------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 1100 BEE
--------------------------------------------**/
#include<bits/stdc++.h>
using namespace std;

#define max 10000
#define pb push_back
#define ll unsigned long long
vector< ll >F;
vector< ll >T;
vector< ll >M;
void fibo()
{
    F.pb(1);
    F.pb(1);
    T.pb(1);
    T.pb(2);
    M.pb(0);
    M.pb(1);
    for(long long i=2; i<=max; i++)
    {
        F.pb(F[i-1]+F[i-2]);
        M.pb(M[i-1]+F[i-1]);
        T.pb(T[i-1]+F[i]);
    }
}
int main()
{
    fibo();
    unsigned long long n;
    while(cin>>n && n!=-1)
    {
        cout<<M[n]<<" "<<T[n]<<endl;
    }
    return 0;
}
