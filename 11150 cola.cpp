/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,result=0;
    while(cin>>n)
    {
        result=0;
        result+=n;
        result+=n/2;
        cout<<result<<endl;
    }
    return 0;
}