/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        cin>>n>>k>>p;
        int result=k;
        while(p--)
        {
            if(result<n)result++;
            else if(result==n)result=1;
        }
        printf("Case %d: %d\n",i,result);
    }
    return 0;
}