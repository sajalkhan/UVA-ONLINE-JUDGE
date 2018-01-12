/*----------------------------------------
    Md.Soharub Hossen
    Daffodil International University
    Problem: 11089 - Fi-binary Number
  ----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
vector< ll >F;
void fibo()
{
    F.push_back(1);
    F.push_back(1);
    for(int i=2;i<=45;i++)F.push_back(F[i-1]+F[i-2]);
}
int main()
{
    int n;
    fibo();
    long long m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        int i=44;
        while(F[i]>m)i--;
        while(i)
        {
            if(m>=F[i])
            {
                printf("1");
                m-=F[i];
            }
            else printf("0");
            i--;
        }
        printf("\n");
    }
    return 0;
}
