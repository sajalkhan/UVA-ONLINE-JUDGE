/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    long long n;
    map<long,string>mp;
    vector<long>v;
    map<long,string>::iterator it;
    while(cin>>n && n)
    {
        v.pb(n);
        long result=0;
        for(long i=1;i<n;i++)
        {
            if(n%i==0)
            {
                result+=i;
            }
        }
        if(result==n)mp[n]="PERFECT";
        if(result<n)mp[n]="DEFICIENT";
        if(result>n)mp[n]="ABUNDANT";
    }
    printf("PERFECTION OUTPUT\n");
    for(int i=0;i<v.size();i++)
    {
        int space=v[i];
        if(space<10)printf("    ");
        if(space>=10 && space<100)printf("   ");
        if(space>=100 && space<1000)printf("  ");
        if(space>=1000 && space<10000)printf(" ");
        cout<<v[i]<<"  "<<mp[v[i]]<<endl;
    }
    printf("END OF OUTPUT\n");
    return 0;
}