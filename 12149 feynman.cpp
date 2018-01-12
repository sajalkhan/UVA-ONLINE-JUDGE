/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n)
    {
        int result=0;
        for(int i=1;i<=n;i++)result+=i*i;
        printf("%d\n",result);
    }
    return 0;
}